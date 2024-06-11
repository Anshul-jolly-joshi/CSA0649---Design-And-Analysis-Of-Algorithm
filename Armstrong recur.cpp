#include <stdio.h>
#include <math.h>

int num_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + num_digits(n / 10);
}

int armstrong_sum(int n, int num_digits) {
    if (n == 0) {
        return 0;
    }
    int digit = n % 10;
    return pow(digit, num_digits) + armstrong_sum(n / 10, num_digits);
}

int is_armstrong(int n) {
    int digits = num_digits(n);
    return n == armstrong_sum(n, digits);
}

int main() {
    int num = 153;
    if (is_armstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}
