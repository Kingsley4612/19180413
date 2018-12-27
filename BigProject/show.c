//
// Created by Kingsley on 2018-12-24.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
void show(Node *head) {
    Node *p;
    p = head;

    while (p != NULL) {
        printf("\t\t\t书名：%s 作者：%s ISBN：%s 价格：%lf\n", p->name, p->author, p->ISBN, p->price);
        //printf("%s", p->name);
        p = p->next;
    }

}

