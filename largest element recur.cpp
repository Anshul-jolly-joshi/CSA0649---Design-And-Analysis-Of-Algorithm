#include <stdio.h>

int find_largest(int arr[], int n) {
    // Base case: if the array has only one element
    if (n == 1) {
        return arr[0];
    }

    // Recursive case: compare the last element with the largest of the rest
    int max_of_rest = find_largest(arr, n - 1);
    return (arr[n - 1] > max_of_rest) ? arr[n - 1] : max_of_rest;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The largest element in the array is %d\n", find_largest(arr, n));
    return 0;
}
