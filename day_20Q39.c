//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10; // Get the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to the product
        }
        num /= 10; // Remove the last digit
    }
    if (product == 1) { // If no odd digits were found
        printf("No odd digits found.\n");
    } else {
        printf("Product of odd digits: %d\n", product);
    }
    return 0;
}