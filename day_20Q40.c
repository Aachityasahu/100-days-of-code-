//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long binary, temp;
    int ones_complement = 0, place = 1, digit;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;
    while (temp > 0) {
        digit = temp % 10; // Get the last digit
        if (digit == 0) {
            ones_complement += 1 * place; // Change 0 to 1
        } else if (digit == 1) {
            ones_complement += 0 * place; // Change 1 to 0
        } else {
            printf("Invalid binary number.\n");
            return 1; // Exit if the input is not a valid binary number
        }
        place *= 10; // Move to the next place value
        temp /= 10;  // Remove the last digit
    }
    printf("1's complement of %lld is %d\n", binary, ones_complement);
    return 0;
}