#include <stdio.h>
#include <string.h>

int count_substr(const char* str, const char* substr);
int main() {
    char str[20], substr[20];
    gets(str);
    gets(substr);
    printf("%d\n", count_substr(str, substr));
    return 0;
}

int count_substr(const char* str, const char* substr)
{
    int i,j,result=0,k,len;
    len=strlen(substr);
    for(i=0,j=0;str[i]!='\0';i++)
    {
        if(str[i]==substr[j])
        {
            for(k=0;substr[j]!='\0';i++,j++)
            {
                if(str[i]!=substr[j])break;
                k++;
            }
            if(k==len)
            {result++;
            i--;}

            j=0;
        }
    }
    return result;
}