//
//  main.c
//  13
//
//  Created by Kingsley on 2018/10/31.
//  Copyright © 2018 Kingsley. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define M 4//定义行
#define N 5//定义列

int main(int argc, char const *argv[])
{
    int mat[M][N];
    int i,j;
    
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("已输入一个%d行，%d列的矩阵：\n", M,N);
    
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N;j++)
        {
            printf("%d\t", mat[i][j]);
        }
        
        printf("\n");
    }
    
     printf("下面将为你转换为一个%d行，%d列的矩阵：\n",N,M);
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            
            printf("%d\t", mat[j][i]);
        }
        
        printf("\n");
    }
    
    return 0;
}


