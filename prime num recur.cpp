#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n, int i) {
    // Base cases
    if (n <= 2) {
        return n == 2;
    }
    if (n % i == 0) {
        return false;
    }
    if (i * i > n) {
        return true;
    }
    
    // Recursive case
    return is_prime(n, i + 1);
}

int main() {
    int num = 29;
    if (is_prime(num, 2)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
