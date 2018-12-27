//
// Created by Kingsley on 2018/12/18.
//

#ifndef BIG_PROJECT_HEADER_H
#define BIG_PROJECT_HEADER_H

void title();

struct book {
    char name[100];
    char author[50];
    char ISBN[20];
    double price;
    struct book *next;
};
typedef struct book Node;

/*导入书本信息并链表+排序*/
Node *create();
Node *insert_to_tail(Node *head, Node *str);
Node *sortlist(Node *head);
Node *mergelist(Node *a, Node *b);
Node *getmid(Node *head);

void *rewrite(Node *head);

void show(Node *head);
int Menu();


typedef struct book Node;


/*1查询*/
void *search(Node *head);

void *ser_name(Node *head);

void *ser_author(Node *head);

void *ser_ISBN(Node *head);

void *ser_price(Node *head);

/*2添加*/
Node *add(Node *head);

/*3修改*/
Node *modify(Node *head);

/*4删除*/
Node *delete(Node *head);

Node *del_name(Node *head);

Node *del_author(Node *head);

Node *del_ISBN(Node *head);

/*5显示*/
void show(Node *head);

/*统计信息*/
struct author{
    int num;//作者的书数
    char name[21];
    struct author *next;
};
typedef struct author Nodea;//作者结构体
void information(Node *head);
Nodea *insert_to_atail(Nodea *head, Nodea *str);

/*更新文件*/
void *rewrite(Node *head);


/*查询目录*/
int Menu();

void title();


#endif //BIG_PROJECT_HEADER_H
