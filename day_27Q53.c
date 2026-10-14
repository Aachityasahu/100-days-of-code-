//Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
#include <stdio.h>
int main() {
    int rows = 5; // Number of rows for the upper half of the pattern
    // Print the upper half of the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" "); // Print spaces for indentation
        }
        for (int k = 0; k < (2 * (rows - i) - 1); k++) {
            printf("*"); // Print asterisks for the pattern
        }                    
        printf("\n"); // Move to the next line after each row
    }
    // Print the lower half of the pattern
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            printf(" "); // Print spaces for indentation
        }
        for (int k = 0; k < (2 * (rows - i) - 1); k++) {
            printf("*"); // Print asterisks for the pattern
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}