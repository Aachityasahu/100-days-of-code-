//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows for the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}