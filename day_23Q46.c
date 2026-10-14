//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows for the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}