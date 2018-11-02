#include<stdio.h>
int main(void){
    int a,b,k,i,h;
    int remainder[30];
    scanf("%d",&a);
    h=a;
    k=0;
    while(a!=0){
        b=a/2;
        k++;
        remainder[k]=a-b*2;
        a=a/2;
    };
    for (i=k;i>=1;i--){
        printf("%d",remainder[i]);
    } 
    printf(" %o %x",h,h);
    return 0;
}

