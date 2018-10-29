//
//  main.c
//  9
//
//  Created by Kingsley on 2018/10/27.
//  Copyright © 2018 Kingsley. All rights reserved.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
    long int n,max,min;
    scanf("%ld",&n);
    long int arr[n];
    int i,t,r;
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%n+1;
    }
    
    
    max=0;
    t=0;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
          max=arr[i];
          t=i;
        }
    }
    printf("最大值:%ld,下标:%d\n",max,t);

    
    min=100000;
    r=0;
    for(i=0;i<n;i++)
        if(min>arr[i])
        {
            min=arr[i];
            r=i;
        }
    
    printf("最小值:%ld,下标:%d\n",min,r);

    
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("和=%d\n",sum);
   
    
    int average;
    average=sum/n;
    printf("平均值=%d\n",average);
 
    
    int variance,w=0;
    for(i=0;i<n;i++)
    {
        w+=(arr[i]-average)*(arr[i]-average);
        variance=w/n;
    }
    printf("方差=%d\n",variance);
    
    
    printf("标准差=%f\n",sqrt(variance));
    return 0;
}

