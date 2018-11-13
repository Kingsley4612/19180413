#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void BubbleSort(int arr[], int left, int right);
int is_sorted(int arr[], int left, int right);

int main() {
    int arr[10],left,right;
    int k,result;
    srand(time(NULL));
    printf("原数组\n");
    for(k=0;k<10;k++)
    {
        arr[k]=rand()%10+1;
        printf("%d\t",arr[k]);
    }
    printf("\n输入left\n");
    scanf("%d",&left);
    printf("输入right\n");
    scanf("%d",&right);
    BubbleSort(arr, left,right);//排序
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

void BubbleSort(int arr[], int left, int right)
{int temp=0;
  for(int i=left;i<right;i++)
  {
      for(int j=i+1;j<=right;j++)
          if(arr[i]>arr[j]) {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
          }
  }
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
