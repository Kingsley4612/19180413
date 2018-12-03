#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};

struct Node *construct(int arr[], int size);

struct Node *insert(struct Node *head, int val);

void Output(struct Node *head);

int main() {
    int arr[5] = {1, 2, 3, 5, 6};
    int size = 5;
    int val ;
    printf("输入插入数\n");
    scanf("%d",&val);
    struct Node *head = construct(arr, size);
    head = insert(head, val);
    Output(head);

    return 0;
}

void Output(struct Node *head) {
    struct Node *p;
    p = head;

    while (p != NULL) {
        printf("%X\t%d\t%X\n", p, p->val, p->next);
        p = p->next;
    }
}

struct Node *construct(int arr[], int size) {
    struct Node *p[size];
    int i;
    for (i = 0; i < size; i++) {

        p[i] = (struct Node *) malloc(sizeof(struct Node));
        p[i]->val = arr[i];
    }
    for (i = 0; i < size; i++) {
        if (i == size - 1)
            p[i]->next = NULL;
        else
            p[i]->next = p[i + 1];

    }

    return p[0];
}

struct Node *insert(struct Node *head, int val) {
    struct Node *new = (struct Node *) malloc(sizeof(struct Node));
    new->val = val;
    struct Node *p, *q;
    p = head;
    int num = 0;
    if(new->val<p->val)
    {new->next=p;
    return new;}
    else {
        while (p->next != NULL && p->val <= new->val) {
            p = p->next;
            num++;
        }
        //printf("p%X\n",p);
        if (new->val<p->val) {
            q=head;
            for (int i = 0; i < num-1; ++i) {
                q = q->next;
            }
            //printf("q->next%X\n",q->next);
            new->next = p;
            q->next = new;
        }
        else{
            p->next=new;
            new->next=NULL;
        }
    }
    return head;
}