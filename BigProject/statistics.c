//
// Created by Kingsley on 2018-12-23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
void information(Node *head){

    Nodea *heada=NULL;
    Nodea *a=heada;
    Nodea *author;
    int n=0;//判断作者是否已经存在
    Node *p=head;
    Node *high=head;//价格最高
    Node *low=head;//价格最低
    int num_b=0;//统计书的数量
    int num_a=0;//统计作者数量
    while(p!=NULL){
        num_b++;//
        /*统计作者数*/
        n=0;
        a=heada;
        while(a!=NULL){//已有作者
            if(strcmp(a->name,p->author)==0){
                a->num++;

                n++;
                break;
            }
            a=a->next;
        }
        if(n==0){//新作者
            author=(Nodea *) malloc(sizeof(Nodea));
            author->num=1;
            strcpy(author->name,p->author);
            heada=insert_to_atail(heada,author);
            num_a++;
        }
        if((high->price)<(p->price)){
            high->price=p->price;
            strcpy(high->name,p->name);
            strcpy(high->author,p->author);
        }

        p=p->next;
    }
    printf("\t\t\t书本数：%d",num_b);
    printf(" 作者数：%d\n",num_a);
    /*书最多作者书*/
    Nodea *mucha=heada;
    a=heada;
    while(a!=NULL){
        if((mucha->num)<(a->num)){
            mucha->num=a->num;
            strcpy(mucha->name,a->name);
        }

        a=a->next;
    }
    printf("\t\t\t书最多的作者：%s",mucha->name);
    a=heada;
    while(a!=NULL){
        if(a->num==mucha->num&&strcmp(a->name,mucha->name)!=0)
            printf(" 和%s",a->name);
        a=a->next;
    }
    printf(" 有%d本书\n",mucha->num);

    printf("\t\t\t价格最贵的书：%s作者：%s价格：%lf\n",high->name,high->author,high->price);
    p=head;
    while(p!=NULL){
        if(p->price==high->price&&strcmp(p->name,high->name)!=0)
            printf("        %s作者：%s价格：%lf\n",p->name,p->author,p->price);
        p=p->next;
    }
    p=head;
    while(p!=NULL){
        if((low->price)>(p->price)){
            low->price=p->price;
            strcpy(low->name,p->name);
            strcpy(low->author,p->author);
        }
        p=p->next;
    }
    printf("\t\t\t价格最低的书：%s作者：%s价格：%lf\n",low->name,low->author,low->price);
    p=head;
    while(p!=NULL){
        if(p->price==low->price&&strcmp(p->name,low->name)!=0)
            printf("        %s作者：%s价格：%lf\n",p->name,p->author,p->price);
        p=p->next;
    }
}

Nodea *insert_to_atail(Nodea *head, Nodea *str) {
    Nodea *p = head;
    str->next = NULL;
    if (head == NULL)
        return str;
    while (p->next != NULL)
        p = p->next;
    p->next = str;
    return head;
}

