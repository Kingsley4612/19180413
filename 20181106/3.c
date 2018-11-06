//
//  main.c
//  3
//
//  Created by Kingsley on 2018/11/5.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
int f(int n);

int main(int argc, const char * argv[]) {
    int tmp, n;
    scanf("%d",&n);
    tmp = f(n-1);
    printf("%d\n",tmp);
    return 0;
}


int f(int n)
{
    if(n == 1)
        return 1;
    else if(n == 2)
        return 2;
    else
        return f(n-1) + f(n-2);
}


