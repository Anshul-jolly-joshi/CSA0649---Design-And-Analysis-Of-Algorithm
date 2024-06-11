#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(char *s, int start, int end) {
    // Base case: if the string has only one character or is empty, it's a palindrome
    if (start >= end) {
        return true;
    }
    // Compare first and last characters, and recurse on the substring between them
    if (s[start] == s[end]) {
        return is_palindrome(s, start + 1, end - 1);
    } else {
        return false;
    }
}

int main() {
    char string[] = "racecar";
    int length = strlen(string);
    if (is_palindrome(string, 0, length - 1)) {
        printf("%s is a palindrome\n", string);
    } else {
        printf("%s is not a palindrome\n", string);
    }
    return 0;
}
