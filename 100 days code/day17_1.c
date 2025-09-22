//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
    int rem,n,result=0,num;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    while (n!=0)
    {
        rem=n%10;
        result=result+rem*rem*rem;
        n=n/10;
    }
    if (num==result)
    {
        printf("The number is an armstrong number");
    }
    else
    {
        printf("The number is not an armstrong number");
    }
    return 0;
}