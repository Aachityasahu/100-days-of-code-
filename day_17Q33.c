//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main() {            
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num; // Store the original number
    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num; // Reset originalNum to the input number
    // Calculate the sum of the nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10; // Get the last digit
        result += pow(remainder, n); // Add the nth power of the digit to result
        originalNum /= 10; // Remove the last digit from the original number
    }
    // Check if the result is equal to the original number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}