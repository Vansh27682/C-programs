//Problem 2(b): Write a program to calculate area and circumference of a circle while taking input from the user.

#include <stdio.h>
int main()
{
    
    //taking input of radius from the user.
    int r; 
    float area,circumference,pi=3.14;  
    printf("Enter radius:");
    scanf("%d",&r); 
    //calculating area and cicumference.
    area=pi*r*r;
    printf("Area of the circle is = %f", area);
    circumference=2.0*pi*r;
    printf("\nCircumference of the circle is: %f",circumference);
    return 0;

}