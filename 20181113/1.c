#include <stdio.h>
int is_sorted(int arr[], int left, int right);

int main() {
    int arr[10],left,right;
    int k,result;
    printf("输入十位数组\n");
    for(k=0;k<10;k++)
    {scanf("%d",&arr[k]);}
    printf("输入left\n");
    scanf("%d",&left);
    printf("输入right\n");
    scanf("%d",&right);
    result=is_sorted(arr,left,right);
    if(result==1)
        printf("单调递增\n");
    if(result==0)
        printf("不单调递增\n");
    return 0;
}

int is_sorted(int arr[], int left, int right)
{int i,j;
    for(i=left;i<right;i++)
    {if(arr[i]>=arr[i+1])
        {j++;break;}
    }
    if(j==0)
        return 1;
    if(j==1)
        return 0;
}