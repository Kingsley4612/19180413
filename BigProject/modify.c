//
// Created by Kingsley on 2018-12-22.
//
//TODO
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

Node *modify(Node *head) {
    printf("\t\t\t请输入所要修改的图书的ISBN:");
    char ISBN[9];
    /*找到要修改的节点*/
    Node *prev = NULL;
    Node *p = head;
    getchar();
    scanf("%[^\n]", ISBN);
    int i = 0;
    while (p != NULL) {
        if (strcmp(ISBN, p->ISBN) == 0) {
            i++;
            break;
        }
        prev = p;
        p = p->next;
    }
    /*删除该节点*/
    //printf("prev %s %s\n",prev->name,prev->ISBN);
    //printf("p %s,%s\n",p->name,p->ISBN);
    if(prev==NULL){
        head=head->next;
    }else{
        prev->next=p->next;
    }
//show(head);
    if (i == 0)
        printf("\t\t\t没有此书！\n");
        /*创造新节点并按序插入链表*/
    else {
        Node *newbook = (Node *) malloc(sizeof(Node));
        printf("\t\t\t请输入修改后的书名：");
        getchar();
        scanf("%[^\n]", newbook->name);
        printf("\t\t\t请输入修改后的作者：");
        getchar();
        scanf("%[^\n]", newbook->author);
        printf("\t\t\t请输入修改后的价格：");
        getchar();
        scanf("%lf", &(newbook->price));
        strcpy(newbook->ISBN,ISBN);
        Node *prevn = NULL;
        Node *pn = head;
        while (pn && pn->name[0] <= newbook->name[0]) {
            prevn = pn;
            pn = pn->next;
        }
        //printf("%s%s\n",pn->name,pn->ISBN);
        if (prevn == NULL) {
            newbook->next = head;
            return newbook;
        }
        prevn->next = newbook;
        newbook->next = pn;


        //return head;

    }
    return head;
}

