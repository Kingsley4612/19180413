
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,x,y,z;
	y=0;
	z=0;
	printf("n=");
	scanf("%d",&n);
	printf("a=");
	scanf("%d",&a);
        for(x=0;x<=n-1;x=x+1)
	{
		y=a*pow(10,x)+y;
		z=z+y;
	}
printf("a+aa+aaa+⋅⋅⋅+aa⋅⋅⋅a(n个a)=%d\n",z);
return 0;
}
