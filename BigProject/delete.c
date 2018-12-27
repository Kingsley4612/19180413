//
// Created by Kingsley on 2018-12-23.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

Node *delete(Node *head) {
    int choice;
    while (1) {
        printf("\t\t\t___________________________\n");
        printf("\t\t\tType:\n");
        printf("\t\t\t\t(1)通过书名删除\n");
        printf("\t\t\t\t(2)通过ISBN删除\n");
        printf("\t\t\t\t(0)退出\n\n");
        printf("\t\t\t请输入您所需的查找方式前的数字：");
        scanf("%d", &choice);
        if (choice == 0)break;

        switch (choice) {
            case 1:
                head = del_name(head);
                break;
            case 3:
                head = del_author(head);
                break;
            case 2:
                head = del_ISBN(head);
                break;
            default:
                printf("请输入正确命令！\n");
        }
    }

    return head;
}

Node *del_name(Node *head) {
    printf("\t\t\t请输入所要删除的书名：");
    char name[51];
    getchar();
    scanf("%[^\n]", name);
    Node *prev = NULL;
    Node *p = head;
    while (p != NULL) {
        if (strcmp(p->name, name) == 0)break;
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        printf("\t\t\t查无此书！\n");
    } else {
        if (prev == NULL) {
            return head->next;
        } else {
            p=p->next;
        }
        printf("\t\t\t删除成功！\n");
    }
    return head;
}

Node *del_author(Node *head) {

}

Node *del_ISBN(Node *head) {
    printf("\t\t\t请输入所要删除的书的ISBN：");
    char ISBN[9];
    getchar();
    scanf("%[^\n]", ISBN);
    Node *prev = NULL;
    Node *p = head;
    while (p != NULL) {
        if (strcmp(p->ISBN, ISBN) == 0)break;
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        printf("\t\t\t查无此书！\n");
    } else {
        if (prev == NULL) {
            return head->next;
        } else {
            prev->next = p->next;
        }
        printf("\t\t\t删除成功！\n");
    }
    return head;
}

