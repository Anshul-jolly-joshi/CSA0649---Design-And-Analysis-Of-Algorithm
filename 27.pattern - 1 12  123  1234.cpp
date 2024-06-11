#include <stdio.h>

void printPattern(int n) {
    if (n == 0) {
        return;
    }
    printPattern(n - 1);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");
}

int main() {
    int rows = 4; // Number of rows in the pattern
    printPattern(rows);
    return 0;
}
