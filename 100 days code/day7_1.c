//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)   // checking the condition for leap year.
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year entered is not a leap year");
    }
    return 0;

}