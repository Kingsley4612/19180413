//
//  main.c
//  4
//
//  Created by Kingsley on 2018/11/5.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
#include<math.h>

int main()
{
    int a[999999]={1,1};
    int x,y;
    int i,j;
    scanf("%d%d", &x, &y);
    for(i=2;i<=x;i++){
        for(j=1;j<=y&&j<=i;j++){
            a[i]+=a[i-j];
            a[i]%=100007;
        }
    }
    printf("%d",a[x]);
}

