#include<stdio.h>
int main()
{
	int h,b,l,n;
	printf("n=");
	scanf("%d",&n);
	for(h=1;h<=2*n-1;h++)
	{
		if(h<=n)
		{	for(l=1;l<=n-h;l++)
			{
				printf(" ");
			}
		for(;l<=n-1+h;l++)
		{
			printf("*");
		}
		}
		else
		{
			for(l=1;l<=h-n;l++)
			{
				printf(" ");
			}
			for(;l<=3*n-h-1;l++)
			{
				printf("*");
			}
		}
		printf("\n");}
return 0;
	}
