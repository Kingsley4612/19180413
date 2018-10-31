//
//  main.c
//  5
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
int fac_bit_count(int n);


int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fac_bit_count(n));
    return 0;
}


int fac_bit_count(int n)
{
    int a;
    unsigned long long m=1;
    for (n=n;n>0;n--)
        m=m*n;
    for (a=0;m!=0;a++)
        m=m/10;
    return a;
}

