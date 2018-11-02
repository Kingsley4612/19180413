
#include<stdio.h>
#include<math.h>
int main()
{
    int x,a,b,c;
    float y,z;
	printf("输入变量x=");
	scanf("%d",&x);
	printf("输入变量a=");
	scanf("%d",&a);
	printf("输入变量b=");
	scanf("%d",&b);
	printf("输入变量c=");
	scanf("%d",&c);
	y=sqrt(fabs(x));
    z=4*a/(b*c);
    printf("左边=%f,右边=%f\n",y,z);
	if (y!=z)
		printf("不等于\n");
	else
		printf("等于\n");
	return 0;
}
