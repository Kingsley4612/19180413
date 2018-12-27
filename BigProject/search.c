//
// Created by Kingsley on 2018-12-20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
void *search(Node *head) {
    int choice;
    Node *p;
    p = head;
    while (1) {
        printf("\t\t\t___________________________\n");
        printf("\t\t\tType:\n");
        printf("\t\t\t\t(1)通过书名查找\n");
        printf("\t\t\t\t(2)通过作者查找\n");
        printf("\t\t\t\t(3)通过ISBN查找\n");
        printf("\t\t\t\t(4)通过价格查找\n");
        printf("\t\t\t\t(0)退出\n\n");
        printf("\t\t\t请输入您所需的查找方式前的数字：");
        scanf("%d", &choice);
        if (choice == 0)break;

        switch (choice) {
            case 1:
                ser_name(head);
                break;
            case 2:
                ser_author(head);
                break;
            case 3:
                ser_ISBN(head);
                break;
            case 4:
                ser_price(head);
                break;
            default:
                printf("请输入正确命令！\n");
        }
    }

    return p;
}

void *ser_name(Node *head) {
    char name[51];
    Node *p = head;
    printf("\t\t\t请输入书名或关键字：");
    getchar();
    scanf("%[^\n]", name);
    //printf("输入%s\n",name);
    int i = 0;
    int j, k, j2, n;
    int result = 0;//int cishu=0;
    int len = strlen(name);//关键词长度
    while (p != NULL) {
        int len2 = strlen(p->name);//书名长度
        //printf("len2 %d\n",len2);
        for (j = 0, k = 0, result = 0; j < len2; j++) {
            if (p->name[j] == name[k]) {
                for (j2 = j, n = 0; k < len; k++, j2++) {
                    if (p->name[j2] != name[k])
                        break;
                    n++;
                }
                //printf("j:%dk:%d\n",j,k);
                if (n == len)
                    result = 1;//成功
            }
        }
        if (result == 1) {
            printf("\t\t\t书名：%s 作者：%s ISBN：%s 价格：%lf\n", p->name, p->author, p->ISBN, p->price);
            i++;
        }
//        else
//            printf("失败%s\n",p->name);
        p = p->next;
        //cishu++;
    }
    //printf("%d\n",cishu);
    if (i == 0)
        printf("\t\t\t没有此书！\n");

}

void *ser_author(Node *head) {
    char author[21];
    Node *p = head;
    printf("\t\t\t请输入作者名：");
    getchar();
    scanf("%[^\n]", author);
    int i = 0;
    while (p != NULL) {
        if (strcmp(author, p->author) == 0) {
            printf("\t\t\t书名：%s 作者：%s ISBN：%s 价格：%lf\n", p->name, p->author, p->ISBN, p->price);
            i++;
        }
        p = p->next;
    }
    if (i == 0)
        printf("\t\t\t没有此人！\n");
    return p;
}

void *ser_ISBN(Node *head) {
    char ISBN[9];
    Node *p = head;
    printf("\t\t\t请输入ISBN：");
    getchar();
    scanf("%[^\n]", ISBN);
    //printf("I%s\n",ISBN);
    int i = 0;
    while (p != NULL) {
        if (strcmp(ISBN, p->ISBN) == 0) {
            printf("\t\t\t书名：%s 作者：%s ISBN：%s 价格：%lf\n", p->name, p->author, p->ISBN, p->price);
            i++;
            break;
        }
        p = p->next;
    }
    if (i == 0)
        printf("\t\t\t没有此书！\n");
    return p;
}

void *ser_price(Node *head) {
    double p1, p2;
    Node *p = head;
    printf("\t\t\t请输入价格区间:");
    scanf("%lf,%lf", &p1, &p2);
    if (p1 > p2)
        printf("\t\t\t请输入正确的价格区间！\n");
    int i = 0;
    while (p != NULL) {
        if ((p->price > p1) && (p->price < p2)) {
            printf("\t\t\t书名：%s 作者：%s ISBN：%s 价格：%lf\n", p->name, p->author, p->ISBN, p->price);
            i++;
        }
        p = p->next;
    }
    if (i == 0)
        printf("\t\t\t没有此价格区间的书！\n");

}

