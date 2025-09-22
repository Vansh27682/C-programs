//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits of the number = %d",sum);
    return 0;
}