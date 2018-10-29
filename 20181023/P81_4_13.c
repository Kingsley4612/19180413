//
//  main.c
//  P81_4_13.c
//
//  Created by Kingsley on 2018/10/25.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,k;

    printf("Please enter an integer：");
    scanf("%d",&n);
    k=(int)sqrt( (double)n);
    for(i=2; i<=k; i++)
        if(n%i==0)
            break;
    if(i>k)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is'not a prime number.\n",n);
    return 0;
}
