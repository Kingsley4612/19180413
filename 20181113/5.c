#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void SelectionSort(int arr[], int left, int right);
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
    SelectionSort(arr, left, right);//进行排序
    printf("排序后数组\n");
    for (k = 0; k < 10; k++) {
        printf("%d\t", arr[k]);
    }

    return 0;
}


void SelectionSort(int arr[], int left, int right){
    for(int i=left;i<right;i++)
    {
        int min_index = i;
        for(int j=i+1; j<=right; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if( i != min_index)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}