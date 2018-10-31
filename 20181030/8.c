//
//  main.c
//  8
//
//  Created by Kingsley on 2018/10/31.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
int LCM(int m,int n);

int main(int argc, const char * argv[]) {
    int a,b,max,min;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    min=a<b?a:b;
    a=max;
    b=min;
    printf("%d\n",a*b/LCM(m,n));
    return 0;
}
int LCM (int m,int n)
{
    int k;
    k=n;
    n=m;
    m=k;
    k=n%m;
    if (k==0)
        return m;
    else
        return LCM(m,k);
}
