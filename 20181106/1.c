//
//  main.c
//  1
//
//  Created by Kingsley on 2018/11/5.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
int Fib(int n,int a,int b);

int main(int argc, const char * argv[]) {
    
    printf("Fib(5)=%d\n",Fib(5,1,1));
        
    return 0;
        
    }

int Fib(int n,int a, int b)
    
    {
        
    if(n<=2)
            
        return b;
        
    return Fib(n-1,b,a+b);
        
    }
