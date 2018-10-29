//
//  main.c
//  6
//
//  Created by Kingsley on 2018/10/27.
//  Copyright © 2018 Kingsley. All rights reserved.
//
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b)
        printf("C");
    else if(b==c)
        printf("A");
    else
        printf("B");
}

