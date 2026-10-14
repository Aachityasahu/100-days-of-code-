//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows for the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" "); // Print spaces for indentation
        }
        for (int k = 0; k < rows - i; k++) {
            printf("*"); // Print asterisks for the pattern
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}