#include<stdio.h>
int main()
{
	int a,b;
for(a=1;a<=9;a=a+1)
{
	for(b=1;b<=a;b=b+1)
	{
		printf("%d*%d=%d\t",a,b,a*b);
	}
	printf("\n");

}
	return 0;
}

