//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    long long number, firstDigit, lastDigit, swappedNumber;
    printf("Enter a number: ");
    scanf("%lld", &number);
    lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;
    swappedNumber = lastDigit;
    while (firstDigit >= 10) {
        swappedNumber *= 10;
        firstDigit /= 10;
    }
    swappedNumber = swappedNumber * 10 + firstDigit;
    printf("Number after swapping first and last digit: %lld\n", swappedNumber);
    return 0;
}