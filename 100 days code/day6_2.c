//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is a positive number:",num);   
    }
    else if(num==0)
    {
    printf("The number is zero");
    }
    else
    {
        printf("%d is a negative number",num);
    }
}