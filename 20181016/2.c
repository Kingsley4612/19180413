#include<stdio.h>
int main()
{
	int a,b,c,d,e=0;
	for(a=1,b=2,c=3;c<=99;a=a+3,b=b+3,c=c+3)
	{
		d=a*b*c;
		e=e+d;
	}
	printf("1×2×3+4×5×6+⋅⋅⋅+97×98×99=%d\n",e);
	return 0;
}


