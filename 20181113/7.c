#include<stdio.h>
#include<string.h>
int main()
{
	char a[501],b[501];
	int i,j,temp;
	scanf("%s%s",a,b);
	if(strlen(a) >= strlen(b))
	{
		for(i =strlen(a) - 1,j = strlen(b) -1;j >= 0; j --,i -- )
		{
			temp = a[i]-'0' + b[j] - '0';
			if(temp <= 9)
			{
				a[i] = temp + '0';
			}
			else
			{
				a[i-1] += 1;
				a[i] = temp -10 +'0';
			}
		}
		printf("%s",a);
	}
	else
	{
		for(i =strlen(b) - 1,j = strlen(a) -1;j >= 0; j --,i -- )
		{
			temp = b[i]-'0' + a[j] - '0';
			if(temp <= 9)
			{
				b[i] = temp + '0';
			}
			else
			{
				b[i-1] += 1;
				b[i] = temp -10 +'0';
			}
		}
		printf("%s",b);
	}
	return 0;
}