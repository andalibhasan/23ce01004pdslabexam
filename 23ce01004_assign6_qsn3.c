#include<stdio.h>

void reverse(int arr[10], int start, int end) {
    if (start >= end)
        return;

    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    
    reverse(arr, start + 1, end - 1);
}

int main() {
    int n, arr[10];
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    reverse(arr, 0, n - 1);

    printf("New array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}