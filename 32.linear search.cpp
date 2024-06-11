#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
