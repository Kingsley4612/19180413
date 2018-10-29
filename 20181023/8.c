//
//  main.c
//  8.c
//
//  Created by Kingsley on 2018/10/25.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
#define M 10
int main()
{
    int a[M][M],i,j;
    for (i=0;i<M;i++)
    {
        for(j=0;j<2*M-2*i+1;j++) printf(" ");
        for(j=0;j<=i;j++)
            printf("%-4d",(a[i][j]=(i==j||j==0)?1:a[i-1][j]+a[i-1][j-1]));
        printf("\n");
    }
    return 0;
}
