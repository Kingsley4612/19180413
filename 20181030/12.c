#include<stdio.h>
#define M 4
#define K 5
#define N 6
void matrix_product(int mat1[][K], int mat2[][N], int product[][N]);
int main()
{
     int mat1[M][K],mat2[K][N],product[M][N],i,j;
    printf("输入第一个数组\n");
     for(i=0;i<M;i++)
         {    for(j=0;j<K;j++)
                 scanf("%d",&mat1[i][j]);
         }
    printf("输入第二个数组\n");
     for(i=0;i<K;i++)
         {    for(j=0;j<N;j++)
                 scanf("%d",&mat2[i][j]);
         }
matrix_product(mat1,mat2,product);
return 0;
}

void matrix_product(int mat1[][K], int mat2[][N], int product[][N])
{int k,h3,l3;
      for(h3=0;h3<M;h3++)
         {     for(l3=0;l3<N;l3++)     //product
                   {  
                       product[h3][l3]=0;
                        for(k=0;k<K;k++)  
                        product[h3][l3]+=mat1[h3][k]*mat2[k][l3];
                   }
         }

   for(int h=0;h<M;h++)
     {  for(int l=0;l<N;l++)
           printf("%d ",product[h][l]);
        printf("\n");
     }


}


