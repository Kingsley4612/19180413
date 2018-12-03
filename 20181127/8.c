#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *merge(struct Node *head1, struct Node *head2);

void Output(struct Node *head);

int main() {
    struct Node *p[5];

    p[0] = (struct Node *) malloc(sizeof(struct Node));
    p[0]->val = 1;
    p[1] = (struct Node *) malloc(sizeof(struct Node));
    p[1]->val = 3;
    p[2] = (struct Node *) malloc(sizeof(struct Node));
    p[2]->val = 5;
    p[3] = (struct Node *) malloc(sizeof(struct Node));
    p[3]->val = 7;
    p[4] = (struct Node *) malloc(sizeof(struct Node));
    p[4]->val = 9;
    p[0]->next = p[1];
    p[1]->next = p[2];
    p[2]->next = p[3];
    p[3]->next = p[4];
    p[4]->next = NULL;

    struct Node *q[5];

    q[0] = (struct Node *) malloc(sizeof(struct Node));
    q[0]->val = 2;
    q[1] = (struct Node *) malloc(sizeof(struct Node));
    q[1]->val = 4;
    q[2] = (struct Node *) malloc(sizeof(struct Node));
    q[2]->val = 6;
    q[3] = (struct Node *) malloc(sizeof(struct Node));
    q[3]->val = 8;
    q[4] = (struct Node *) malloc(sizeof(struct Node));
    q[4]->val = 10;
    q[0]->next = q[1];
    q[1]->next = q[2];
    q[2]->next = q[3];
    q[3]->next = q[4];
    q[4]->next = NULL;
    struct Node *head = merge(p[0], q[0]);
    Output(head);
    return 0;
}

struct Node *merge(struct Node *head1, struct Node *head2) {
    struct Node *p1 = head1;
    struct Node *p2 = head2;
    struct Node *p=NULL;
    struct Node *ans;
    struct Node head;
    ans=&head;
    head.next = NULL;

    while (p1 && p2) {
        p = (struct Node *) malloc(sizeof(struct Node));
        p->next=NULL;
        if (p1->val <= p2->val) {
            p->val = p1->val;
            p1 = p1->next;
        } else {
            p->val = p2->val;
            p2 = p2->next;
        }
        //printf("%d\n",p->val);
        ans->next = p;
        ans = p;
    }

    while (p2 != NULL) {
        p = (struct Node *) malloc(sizeof(struct Node));
        p->next=NULL;
        p->val = p2->val;
        p2 = p2->next;
        ans->next = p;
        ans=p;
    }
    while (p1 != NULL) {
        p = (struct Node *) malloc(sizeof(struct Node));
        p->next=NULL;
        p->val = p1->val;
        p1 = p1->next;
        ans->next = p;
        ans=p;
    }
    ans->next=NULL;
    return head.next;
}


void Output(struct Node *head) {
    struct Node *p;
    p = head;

    while (p != NULL) {
        printf("%X\t%d\t%X\n", p, p->val, p->next);
        p = p->next;
    }
}