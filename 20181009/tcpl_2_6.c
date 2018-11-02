
#include<stdio.h>
int main()
{
int x=0,p=0,n=0,y=0,a=0;
printf("x=");
scanf("%d",&x);
printf("p=");
scanf("%d",&p);
printf("n=");
scanf("%d",&n);
printf("y=");
scanf("%d",&y);
a=(~0 << p+1) | ~(~0 << p+1-n);
x=x&a;
y=(y<<p+1-n)&~a;
x=x|y;
printf("x=%d",x);
return 0;
}

