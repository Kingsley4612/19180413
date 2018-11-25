#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void MergeSort(int arr[], int left, int right);
int is_sorted(int arr[], int left, int right);

int main() {
    int arr[10],left,right;
    int k,result;
    srand(time(NULL));
    printf("原数组\n");
    for(k=0;k<10;k++)
    {
        arr[k]=rand()%100+1;
        printf("%d\t",arr[k]);
    }
    printf("\n输入left\n");
    scanf("%d",&left);
    printf("输入right\n");
    scanf("%d",&right);
    MergeSort(arr, left,right);//排序
    printf("排序后数组\n");
    for(k=0;k<10;k++)
    {
        printf("%d\t",arr[k]);
    }
    result=is_sorted(arr,left,right);
    if(result==1)
        printf("单调递增\n");
    if(result==0)
        printf("不单调递增\n");
    return 0;
}

int is_sorted(int arr[], int left, int right)
{int i,j=0;
    for(i=left;i<right;i++)
    {if(arr[i]>arr[i+1])
        {j++;break;}
    }
    if(j==0)
        return 1;
    if(j==1)
        return 0;
}

void MergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int reg[10];
    int len = right - left, mid = (len >> 1) + left;
    int start1 = left, end1 = mid;
    int start2 = mid + 1, end2 = right;
    MergeSort(arr,  start1, end1);
    MergeSort(arr, start2, end2);
    int k = left;
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
    while (start1 <= end1)
        reg[k++] = arr[start1++];
    while (start2 <= end2)
        reg[k++] = arr[start2++];
    for (k = left; k <= right; k++)
        arr[k] = reg[k];
}