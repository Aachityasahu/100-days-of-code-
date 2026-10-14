//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows for the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = rows - i; j > 0; j--) {
            printf(" "); // Print spaces for indentation
        }
        for (int k = rows - i + 1; k <= rows; k++) {
            printf("%d", k); // Print numbers for the pattern   
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}