//Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main()

{
    int num1,num2,x;
    printf("Enter first number: ");
    scanf( "%d", &num1);      //taking input from the user.
    printf("Enter second number: ");
    scanf( "%d" ,&num2);
    printf("Before Swap :%d,%d",num1,num2);
    x=num1;
    num1=num2;
    printf("\nAFTER SWAP:%d,%d", num1,x);
    return 0;
}

    