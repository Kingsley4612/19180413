//
// Created by Kingsley on 2018/12/19.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"


Node *create() {
    FILE *fp;
    Node *book, *head;
    head = NULL;
    if ((fp = fopen("/Users/kingsley/CLionProjects/BigProject/book.csv", "r+")) == NULL) {
        printf("无法打开文件！\n");
        exit(1);
    }

    while (feof(fp) == 0) {

        book = (Node *) malloc(sizeof(Node));
        fscanf(fp, "%[^,],%[^,],%[^,],%lf ", book->name, book->author, book->ISBN, &(book->price));
        head = insert_to_tail(head, book);
    }

    head = sortlist(head);

    if (fclose(fp))
        printf("文件关闭错误！\n");

    return head;
}

Node *getmid(Node *head) {
    if (!head) return NULL;
    if (!head->next) return head;
    Node *slow = head;
    Node *fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}

Node *insert_to_tail(Node *head, Node *str) {
    Node *p = head;
    str->next = NULL;
    if (head == NULL)
        return str;
    while (p->next != NULL)
        p = p->next;
    p->next = str;
    return head;
}

Node *sortlist(Node *head) {
    if (!head) return NULL;
    if (!head->next) return head;
    Node *p = head;
    Node *mid = getmid(p);
    Node *nextpart = NULL;
    if (mid) {
        nextpart = mid->next;
        mid->next = NULL;
    }
    return mergelist(sortlist(p), sortlist(nextpart));
}

Node *mergelist(Node *a, Node *b) {
    if (a == NULL) return b;
    if (b == NULL) return a;
    Node *p = NULL;
    if (a->name[0] <= b->name[0]) {
        Node *q = (Node *) malloc(sizeof(Node));
        *q = *a;
        q->next = NULL;
        p = insert_to_tail(p, q);
        a = a->next;
        //free(q);
    } else {
        Node *q = (Node *) malloc(sizeof(Node));
        *q = *b;
        q->next = NULL;
        p = insert_to_tail(p, q);
        b = b->next;
        //free(q);
    }
    //Node *head = p;
    while (a && b) {
        if (a->name[0] <= b->name[0]) {
            Node *q = (Node *) malloc(sizeof(Node));
            *q = *a;
            q->next = NULL;
            p = insert_to_tail(p, q);
            a = a->next;
            //free(q);
        } else {
            Node *q = (Node *) malloc(sizeof(Node));
            *q = *b;
            q->next = NULL;
            p = insert_to_tail(p, q);
            b = b->next;
            //free(q);
        }
    }
    while (b) {
        Node *q = (Node *) malloc(sizeof(Node));
        *q = *b;
        q->next = NULL;
        p = insert_to_tail(p, q);
        b = b->next;
        //free(q);
    }
    while (a) {
        Node *q = (Node *) malloc(sizeof(Node));
        *q = *a;
        q->next = NULL;
        p = insert_to_tail(p, q);
        a = a->next;
        //free(q);
    }

    return p;
}

void *rewrite(Node *head) {
    FILE *fp;
    if ((fp = fopen("/Users/kingsley/CLionProjects/BigProject/book.csv", "w")) == NULL) {
        printf("无法打开文件！\n");
        exit(1);
    }
    while (head != NULL) {
        fprintf(fp, "%s,%s,%s,%lf\n", head->name, head->author, head->ISBN, head->price);
        head = head->next;
    }
    if (fclose(fp))
        printf("文件关闭错误！\n");
    return 0;
}
