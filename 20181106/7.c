//
//  main.c
//  7
//
//  Created by Kingsley on 2018/11/5.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include<stdio.h>
int BinomialCoefficient(int n, int k);

int main() {
    int tmp1;
    int tmp2;
    scanf ("%d%d",&tmp1,&tmp2);
    printf("Binomial Coefficiant : %d\n",BinomialCoefficient(tmp1,tmp2));
    return 0;
}

int BinomialCoefficient(int n,int k) {
    int n1;
    int n2;
    
    if((k == 0) || (k == n)) {
        return 1;
    }
    else {
        n1 = BinomialCoefficient(n-1,k);
        n2 = BinomialCoefficient(n-1,k-1);
        return n1+n2;
    }
}


