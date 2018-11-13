#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InsertionSort(int arr[], int left, int right);

int main() {
    int arr[10], left, right;
    int k;
    srand(time(NULL));
    printf("原数组\n");
    for (k = 0; k < 10; k++) {
        arr[k] = rand() % 10 + 1;
        printf("%d\t", arr[k]);
    }
    printf("\n输入left\n");
    scanf("%d", &left);
    printf("输入right\n");
    scanf("%d", &right);
    InsertionSort(arr, left,right);//进行排序
    printf("排序后数组\n");
    for(k=0;k<10;k++)
    {
        printf("%d\t",arr[k]);
    }

    return 0;
}

void InsertionSort(int arr[], int left, int right){
    for(int i=left;i<=right;i++)
    {
        int j=0;
        while( (arr[j]<arr[i]) && (j<i))
        {
            j++;
        }
        if(i != j) {
            int temp = arr[i];
            for(int k = i; k > j; k--) {
                arr[k] = arr[k-1];
            }
            arr[j] = temp;
        }
    }
}
