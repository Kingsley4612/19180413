//
//  main.c
//  pow_mod.c
//
//  Created by Kingsley on 2018/10/26.
//  Copyright © 2018 Kingsley. All rights reserved.
//
#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    printf("Please enter A B C:\n" );
    scanf("%lld%lld%lld",&a,&b,&c);
    b=pow(a,b);
    c=(long long int)(b)%c;
    printf("a^b mod c=%lld\n",c);
    return 0;
}
