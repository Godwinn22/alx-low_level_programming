#include <stdio.h>
#include <stdbool.h>

/**
 * reverse - a function that reverses
 * @num: the number
 *
 * Return: returns the reversed number
 */
int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return (reversed);
}

/**
 * isPalindrome - a function that checks for a palindrome
 * @num: the number
 *
 * Return: returns true or false
 */
bool isPalindrome(int num) {
    return num == reverse(num);
}

/**
 * main - Entry point
 *
 * Return: 0 (always success)
 */
int main() {
    int maxPalindrome = 0;
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int product = i * j;
            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    if (file == NULL) {
        return -1;
    }
    fprintf(file, "%d", maxPalindrome);
    fclose(file);

    return 0;
}
