#include <stdio.h>

int main() {
    int numbers[] = {4, 7, 2, 9, 1, 5, 8, 3, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int minSequence = numbers[0];
    int maxSequence = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < minSequence) {
            minSequence = numbers[i];
        }
        if (numbers[i] > maxSequence) {
            maxSequence = numbers[i];
        }
    }

    printf("Minimum value sequence: %d\n", minSequence);
    printf("Maximum value sequence: %d\n", maxSequence);

    return 0;
}
