#include<stdio.h>
int main()
{
  int a,g,s,result;
  scanf("%d",&a);
  g=(~(~0<<4))&a;
  s=((~0<<4)&a)>>4;
  result=g+10*s;
  printf("%d",result);
  return 0;
}
