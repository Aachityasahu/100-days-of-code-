//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
int main (){
    int length, breadth;
    printf("enter the length of the rectangle =");
    scanf("%d",&length);
    printf("enter the breadth of the rectangle =");
    scanf("%d",&breadth);
    printf("the area of the rectangle is = %d\n",length*breadth);
    printf("the perimeter of the rectangle is = %d\n",2*(length+breadth));
    return 0;

}