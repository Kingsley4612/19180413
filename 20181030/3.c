//
//  main.c
//  3
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
int is_pow2(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",is_pow2(n));
    return 0;
}
int is_pow2(int n)
{
    if ((n&(n-1))0)
        return -1;
    return 0;
}
