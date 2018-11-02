
#include<stdio.h>
int main()
{
	int a,b=1,c;
	for(a=1;a<=10;a=a+1)
	{
		b=b*a;
		c+=b;
	}
	printf("1!+2!+⋅⋅⋅+10!=%d\n",c);
	return 0;
}
