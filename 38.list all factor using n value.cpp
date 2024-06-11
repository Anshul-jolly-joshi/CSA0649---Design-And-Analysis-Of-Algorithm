#include <stdio.h>

void generate_factors(int n, int i) {
    if (i > n)
        return;
    
    if (n % i == 0) {
        printf("%d ", i);
    }

    generate_factors(n, i + 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    generate_factors(n, 1);

    return 0;
}
