//
//  main.c
//  4
//
//  Created by Kingsley on 2018/10/31.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
int count1_in_bin(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}
int count1_in_bin(int n)
{
    int count=0,i=32;
    if(n==0) return 0;
    else {
        while(i!=0)
        {
            if((1&n)==1)
                count++;
            n=n>>1;
            i--;
        }
        return count;
    }
}
