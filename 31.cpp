#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int number = 12345;
    int sum = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, sum);
    return 0;
}
