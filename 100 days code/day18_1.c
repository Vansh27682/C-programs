//Write a program to print all factors of a number.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The factors of the given number are:\n");
    for (i=1 ; i<=n; i++)
    {
        if (n%i==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}