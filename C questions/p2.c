//Problem 1(b): Write a program to calculate area of a rectangle while taking input from the user

#include <stdio.h>
int main()
{
    int l;    
    int b;
    printf("Enter length of the rectangle:");
    scanf("%d",&l);
    printf("Enter width of the rectangle:");
    scanf("%d",&b);
    int area;
    area=l*b;
    printf("Area of the rectangle is = %d", area);
    return 0;

}