#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MergeSort(int arr[], int left, int right);

int MergeSort(int arr[], int left, int right);


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", MergeSort(arr, 0, n));
    return 0;
}

int Merge(int arr[], int left, int mid, int right) {
    int size = right - left + 1;
    int *temparr = (int *) malloc(size * sizeof(int));
    int i = left, j = mid + 1, k = 0;
    int cnt = 0;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temparr[k++] = arr[i++];
        else {
            temparr[k++] = arr[j++];
            cnt += mid - i + 1;
        }
    }
    while (i <= mid)
        temparr[k++] = arr[i++];
    while (j <= right)
        temparr[k++] = arr[j++];
    memcpy(arr + left, temparr, size * sizeof(int));
    free(temparr);
    return cnt;
}

int MergeSort(int arr[], int left, int right) {
    int mid = left + (right - left) / 2;
    int cnt = 0;
    if (left >= right)
        return cnt;
    cnt += MergeSort(arr, left, mid);
    cnt += MergeSort(arr, mid + 1, right);
    cnt += Merge(arr, left, mid, right);
    return cnt;
}