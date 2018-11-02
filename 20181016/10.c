#include<stdio.h>
float a3,a2,a1,a0;
float f(float x);
int main()
{
  float a,b;
  scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
  scanf("%f %f",&a,&b);
  if(f((a+b)/2)==0)
  {
	  printf("%.2f",(a+b)/2);
  }
  else
  {
    while((b-a)>0.01)
    {
      if(f((a+b)/2)*f(a)>0)
      {
        a=(a+b)/2;
      }
      else
      {
        b=(a+b)/2;
      }
    }
    printf("%.2f",(a+b)/2);
  }
  return 0;
}  
float f(float x)
{
	float result;
	result = a3*x*x*x + a2*x*x + a1*x + a0;
	return result;
}
