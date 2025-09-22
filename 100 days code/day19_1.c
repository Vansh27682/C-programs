//Write a program to print LCM of two numbers.
#include<stdio.h>
int main()
{
    int n1,n2,max,i,lcm;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
   
    return 0;
}