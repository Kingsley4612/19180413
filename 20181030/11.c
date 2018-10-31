//
//  main.c
//  11
//
//  Created by Kingsley on 2018/10/31.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
#include<string.h>
void reverse(char* str);

int main()
{
    char a[100];
    char* p=a;
    gets(a);
    reverse(p);
    return 0;
}

void reverse(char* str)
{
    int i=0,j=strlen(str);
    for(i=j-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}
