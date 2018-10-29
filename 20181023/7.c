//
//  main.c
//  7
//
//  Created by Kingsley on 2018/10/27.
//  Copyright © 2018 Kingsley. All rights reserved.
//
#include <stdio.h>
#include <time.h>
#include <math.h>
int main() {
    clock_t start_clock, end_clock;
    double elapsed_time;
    int i;
    long long int a,b,c;
    int ans=1;
    printf("Please enter A B C:\n" );
    scanf("%lld%lld%lld",&a,&b,&c);
    start_clock = clock();
    for (i=1; i<=1000000000; ++i)
  
     {                       //my codes
         a = a % c;
         while(b>0)
         {
             
             if(b % 2 == 1)
                 ans = (ans * a) % c;
             b = b/2;
             a = (a * a) % c;
         }
        
         

     }

        end_clock = clock();
    elapsed_time = (double)(end_clock - start_clock)/ CLOCKS_PER_SEC;
    printf("%.6lf",elapsed_time);
    return 0;
}

