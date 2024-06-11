#include <stdio.h>

int reverseNumber(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10) + 10 * reverseNumber(num / 10);
}

int main() {
    int num = 12345;
    printf("Reverse of %d is: %d", num, reverseNumber(num));
    return 0;
}
