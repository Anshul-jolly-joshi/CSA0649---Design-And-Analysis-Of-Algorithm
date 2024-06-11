#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num = 28; // Example perfect number
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }
    return 0;
}
