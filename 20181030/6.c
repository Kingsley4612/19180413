//
//  main.c
//  6
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int is_prime(int n);
int main()
{
    int m,i=1,n=2;
    int a[1001];
    for (n=2;i<=1000;n++)
    {
        m=is_prime(n);
        if (m==0){
            a[i]=n;
            i++;
        }
    }
    for (i=100;i<=1000;i++)
        printf("%d\n",a[i]);
    return 0;
}


int is_prime(int n)
{
    int a;
    if((n&1)==0&&n>2)
        return -1;
    else if(n==2)
        return 0;
    else{
        for(a=3;a<=sqrt(n);a++)
            if(n%a==0) break;
        if (a>sqrt(n))
            return 0;
        else return -1;
    }
}
