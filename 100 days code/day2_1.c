//Problem 2(a): Write a program to calculate area and perimeter of a rectangle while taking input from the user.

#include <stdio.h>
int main()
{
    //taking input of length and breadth from the user.
    int l;    
    int b;
    printf("Enter length of the rectangle:");
    scanf("%d",&l); 
    printf("Enter width of the rectangle:");
    scanf("%d",&b);
    //calculating area and perimeter.
    int area,perimeter;
    area=l*b;
    printf("Area of the rectangle is = %d", area);
    perimeter=2*(l+b);
    printf("\nPerimeter of the rectangle is: %d",perimeter);
    return 0;

}