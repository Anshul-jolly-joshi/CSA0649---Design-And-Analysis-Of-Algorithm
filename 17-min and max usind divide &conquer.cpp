#include <stdio.h>
void findMaxMin(int arr[], int low, int high, int *max, int *min) {
    int mid, max1, max2, min1, min2;
    if (low == high) {
        *max = arr[low];
        *min = arr[low];
    } 
	    else if (high - low == 1) {
        if (arr[low] > arr[high]) {
            *max = arr[low];
            *min = arr[high];
        } else {
            *max = arr[high];
            *min = arr[low];
        }
    } 
    else {
        mid = (low + high) / 2;
        findMaxMin(arr, low, mid, &max1, &min1);
        findMaxMin(arr, mid + 1, high, &max2, &min2);
        *max = (max1 > max2) ? max1 : max2;
        *min = (min1 < min2) ? min1 : min2;
    }
}

int main() {
    int arr[] = {7, 3, 9, 1, 5, 12, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMaxMin(arr, 0, n - 1, &max, &min);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
