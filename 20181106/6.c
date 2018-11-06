#include <stdio.h>
void Move1(char source,char help,char target);
void Hanoi(int n,char source,char help,char target);
void Move2(char source,char help);
int counter=0;

int main(int argc, const char * argv[]) {
    int i;
    scanf("%d",&i);
    Hanoi(i,'A','B','C');
    printf("%d",counter);
    return 0;
    
}

void Move1(char source,char help,char target) {
    printf("%c->%c\n", source, help);
    counter++;
    printf("%c->%c\n", help, target);
    counter++;
}

void Move2(char source,char help){
    printf("%c->%c\n",source,help);
    counter++;
}

void Hanoi(int n,char source,char help,char target){
    if(n==1) {
        Move1(source, help,target);
    }
    else {
        Hanoi(n-1, source, help, target);
        Move2(source, help);
        Hanoi(n-1, target, help, source);
        Move2(help,target);
        Hanoi(n-1, source, help, target);
    }
}

