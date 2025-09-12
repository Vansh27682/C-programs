//write a program to display sum of first n natural no.
#include <stdio.h>
int main()
{
    int a , sum , n;
    sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (a=1 ; a<=n ; a++)
    {
        sum= a+sum;  
           
    }
   printf("\nThe sum of first n natural number is:%d",sum);
    return 0;
}