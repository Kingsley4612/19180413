#include <stdio.h>
#include <stdlib.h>
struct Node {
    int val;
    struct Node* next;
};
struct Node *construct(int arr[], int size);
void Output(struct Node *head);

int main() {
    int arr[5]={1,2,3,4,5};
    int size=5;
    
    struct Node *head= construct(arr,size);
    Output(head);

    return 0;
}

void Output(struct Node *head)
{
    struct Node *p;
    p=head;

    while(p!=NULL)
    {
        printf("%X\t%d\t%X\n",p,p->val,p->next);
        p=p->next;
    }
}

struct Node * construct(int arr[], int size)
{
    struct Node *p[size];
int i;
    for (  i = 0; i < size; i++) {

        p[i] = (struct Node *) malloc(sizeof(struct Node));
        p[i]->val = arr[i];
    }
    for(i=0;i<size;i++ )
    {
        if(i==size-1)
            p[i]->next=NULL;
        else
            p[i]->next =p[i+1];

    }

    return p[0];
}
