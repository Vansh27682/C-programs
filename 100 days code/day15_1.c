//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n ,i, fact=1;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
        fact=fact*i;
        
    }
     printf("The factorial of the given number is = %d",fact);
    return 0;
}