
#include <stdio.h>
int main()
{
int x,y=0;
printf("请输入一个x的值：");
scanf("%d",&x);
y=x*x*x+2*x*x+3*x+1;
printf("x^3+2*x^2+3*x+1=%d\n",y);
return 0;
}
