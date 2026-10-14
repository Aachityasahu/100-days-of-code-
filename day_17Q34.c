//Write a program to check if a number is prime.
#include<stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check if the number is less than 2
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    
    // Check for factors from 2 to the square root of num
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1; // Set flag if a factor is found
            break;
        }
    }
    
    // Output the result based on the flag
    if (flag == 0) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
