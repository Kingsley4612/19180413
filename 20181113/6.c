#include <stdio.h>
#include <string.h>
void k_reverse(char* str, int k);
int main() {
    printf("输入字符串\n");
    char str[20];
    int k;
    scanf("%s",str);
    printf("输入k\n");
    scanf("%d",&k);
    k_reverse(str,k);
    return 0;
}

void k_reverse(char* str, int k)
{
    int len,i,j,c;
    len=strlen(str);
    c=len;
    for(i=0;len>=k;len-=k)
    {
        for(j=i+k-1;j>=i;j--)
            printf("%c",str[j]);
        i+=k;
    }
    for(;i<c;i++)
        printf("%c",str[i]);
}