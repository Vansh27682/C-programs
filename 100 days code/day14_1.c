//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for (i=1 ; i<=2*n ; i=i+2)
    {
        sum=sum+i;
    }
    printf("sum of first n odd numbers=%d",sum);
}