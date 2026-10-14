//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to the sum
        num /= 10;        // Remove the last digit
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}   