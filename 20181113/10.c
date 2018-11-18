#include <stdio.h>
#include <string.h>

int my_strlen(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

int main()
{
    char *str ;
    gets(str);

    int len = 0;

    len = my_strlen(str);
    printf("len : %d\n", len);

    return 0;
}