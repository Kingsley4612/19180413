//
// Created by Kingsley on 2018-12-23.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"

Node *add(Node *head) {
    printf("\t\t\t请输入书本信息\n");
    Node *newbook = (Node *) malloc(sizeof(Node));
    getchar();
    scanf("%[^,],%[^,],%[^,],%lf", newbook->name, newbook->author, newbook->ISBN, &(newbook->price));

    Node *prev = NULL;
    Node *p = head;
    while (p && p->name[0] <= newbook->name[0]) {
        prev = p;
        p = p->next;
    }
    if (prev == NULL) {
        newbook->next = head;
        return newbook;
    }
    prev->next = newbook;
    newbook->next = p;
    printf("\t\t\t已成功添加！\n");

    return head;
}

