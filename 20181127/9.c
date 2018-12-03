#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    struct Node *next;
};


void clear(struct Node* head);

void Output(struct Node *head);

int main() {
    struct Node *p[5];

    p[0] = (struct Node *) malloc(sizeof(struct Node));
    p[0]->val = 1;
    p[1] = (struct Node *) malloc(sizeof(struct Node));
    p[1]->val = 2;
    p[2] = (struct Node *) malloc(sizeof(struct Node));
    p[2]->val = 3;
    p[3] = (struct Node *) malloc(sizeof(struct Node));
    p[3]->val = 4;
    p[4] = (struct Node *) malloc(sizeof(struct Node));
    p[4]->val = 5;
    p[0]->next = p[1];
    p[1]->next = p[2];
    p[2]->next = p[3];
    p[3]->next = p[4];
    p[4]->next = NULL;
    clear(p[0]);

    Output(p[0]);

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


void clear(struct Node* head) {
    struct Node* p;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}