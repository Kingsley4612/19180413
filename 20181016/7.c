#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d",&a);
  b=a/100;
  d=a%10;
  c=(a-100*b-d)/10;
  printf("%d",b+10*c+100*d);
  return 0;
}
