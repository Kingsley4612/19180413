#include<stdio.h>
int main()
{
	int start;
	scanf("%d",&start);
	int end;
	end=start+3;
	int n=0;
	for (int i=start;i<=end;i++)
	{
		for(int j=start;j<=end;j++)
		{if(j==i) continue;
			for(int k=start;k<=end;k++)
			{if(k==i) continue;
		         if(k==j) continue;
			 n++;
			 if(n%6!=0)
			   {printf("%d ",100*i+10*j+k);}
			 else
			   {printf("%d\n",100*i+10*j+k);}
			}
		}
	}
return 0;
}
