//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main (){
    int a,b;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    printf("the sum of a and b is = %d\n",a+b);
    printf("the difference of a and b is = %d\n",a-b);
    printf("the product of a and b is = %d\n",a*b);
    printf("the quotient of a and b is = %d\n",a/b);

    return 0;
}
