//
//  main.c
//  4
//
//  Created by Kingsley on 2018/10/26.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
int main()
{
    int X,Y,N;
    scanf("%d",&N);
    int mark;  //判断是否有解
    mark=0;
    for(X=1;X<=100;X++)
    {
        
        for(Y=X;Y<=100;Y++)
        {
            if(X*X+Y*Y==N)
            {
                mark=1;
                printf("%d %d\n",X,Y);
                
            }
        }
        
    }
    
    if(mark==0)
      printf("No Solution");
    
    return 0;
}


