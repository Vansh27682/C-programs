//Write a program to input two numbers and display their sum.

#include<stdio.h>

int main()

{
    int num1,num2,sum;
    printf("Enter first number: ");
    scanf( "%d", &num1);      //taking input from the user.
    printf("Enter second number: ");
    scanf( "%d" ,&num2);
    sum = num1 + num2;        //calculating the sum
    printf("The sum of the two numbers is:%d",sum);
    return 0;
}