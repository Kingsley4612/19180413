#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binary_search_recursive(int arr[], int left, int right, int query);
int binary_search_iterative(int arr[], int left, int right, int query);

void BubbleSort(int arr[], int left, int right);

int main() {
    int arr[10],left,right;
    int k;
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
    for(k=0;k<10;k++) {
        printf("%d\t",arr[k]);
    }

    int query=0;
    printf("\n输入要查找的元素\n");
    scanf("%d",&query);
    int location = binary_search_iterative(arr,left,right,query);
    int location2 = binary_search_recursive(arr,left,right,query);
    if(location>=0)
        printf("元素的下标是 %d\n", location);
    if(location2>=0)
        printf("元素的下标是 %d\n", location2);
    else{
        printf("此元素不存在 \n");
    }

    return 0;
}

void BubbleSort(int arr[], int left, int right)
{int temp=0;
    for(int i=left;i<=right;i++)
    {
        for(int j=i+1;j<=right;j++)
            if(arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
}

int binary_search_iterative(int arr[], int left, int right, int query){
    while(left<=right)
        {
            int mid = (left+right)/2;
            if(arr[mid]>query)
            {
                right = mid - 1;
            }
            else if(arr[mid]<query)
            {
                left = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
}

int binary_search_recursive(int arr[],int left,int right,int query){
    if (left<=right)
    {
        int mid = (left+right)/2;
        if(query == arr[mid])
            return mid;
        else if(query<arr[mid])
            return binary_search_recursive(arr,left,mid-1,query);
        else if(query>arr[mid])
            return binary_search_recursive(arr,mid+1,right,query);
    }
    else
        return -1;
}
