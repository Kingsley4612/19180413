#include<stdio.h>
int main()
{
  int a,b,r;//a=分子,b=分母
scanf("%d/%d",&a,&b);
int x,y;
x=a,y=b;
if(a>b)
  {
    while(b!=0)
    {r=a%b;
    a=b;
    b=r;
    }
    printf("%d/%d",x/a,y/a);
  }
else
  {
    while(a!=0)
    {r=b%a;
    b=a;
    a=r;  
    }
    printf("%d/%d",x/b,y/b);
  }
return 0;
}
