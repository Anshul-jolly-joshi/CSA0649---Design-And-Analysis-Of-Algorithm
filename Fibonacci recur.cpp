#include <stdio.h>

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0) {
        return -1; // Error case for non-positive input
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num_terms = 10;

    printf("Fibonacci series for %d terms: ", num_terms);
    for (int i = 1; i <= num_terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
