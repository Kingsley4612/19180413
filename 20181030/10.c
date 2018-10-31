//
//  main.c
//  10
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int is_str_pal(const char* str);

int main(int argc, const char * argv[]) {
    char a[100];
    char *str=a;
    gets(a);
    printf("%d\n",is_str_pal(str));
    return 0;
}


int is_str_pal(const char* str){
    int n=strlen(str);
    int i, j,count=0;
    for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (*(str + i) == *(str + j))
        {
            count++;
        }
    }
    if (count == n)
        return 0;
    else
        return -1;
    
}

