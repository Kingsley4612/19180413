#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char * my_strcpy(char *dest, const char *src)
{
    assert(src != NULL&&dest != NULL);
    char *ret = dest;
   while ((*dest++ = *src++));
   return ret;
}

int main()
{
    char temp[100];
    scanf("%s",&temp);
    char *p=temp;
    char arr[100];
    printf("%s\n",my_strcpy(arr,p));
    return 0;
}
