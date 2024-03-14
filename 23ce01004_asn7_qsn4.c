#include <stdio.h>

// Function to find the maximum element in an array recursively
int findMax(int arr[], int n) {
    // Base case: if there is only one element
    if (n == 1)
        return arr[0];

    // Recursive case: find maximum of the rest of the array
    int max_of_rest = findMax(arr, n - 1);

    // Compare the maximum of the rest with the current element
    return (max_of_rest > arr[n - 1]) ? max_of_rest : arr[n - 1];
}

int main() {
    int arr[] = {10, 5, 7, 25, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive function to find the maximum element
    int max = findMax(arr, n);

    printf("The largest element in the array is: %d\n", max);

    return 0;
}