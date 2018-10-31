//
//  main.c
//  7
//
//  Created by Kingsley on 2018/10/30.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
int GCD_recursive(int m,int n);
int GCD_iterative(int m, int n);

int main(int argc, const char * argv[]) {
    int a,b,max,min;
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    min=a<b?a:b;
    a=max;
    b=min;
    printf("%d\n",GCD_recursive(a,b));
    printf("%d\n",GCD_iterative(a,b));
    return 0;
}

//递归
int GCD_recursive(int m,int n){
    int i;
        i=n;
        n=m;
        m=i;
    i=n%m;
    if (i==0) return m;
    else      return GCD_recursive(m, i);
    
}

//迭代
int GCD_iterative(int m,int n){
    int i=2,group[100];
    if (group[0]==0)  return n;
    else group[1]=n%group[0];
    
    
    if(group[1]==0) return group[0];
    else{
        for (i=2;group[i-1]!=0;i++)
            group[i]=group[i-2]%group[i-1];
    }
    return group[i-2];
}
