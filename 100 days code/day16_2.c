//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main ()
{
    int n,rem=0,rev=0,num;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    num=n;
    while (n>0) //reversing the number
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
    }
        if (num==rev)
        {
        printf("The number is a palindrome number");   //checking condition for palindrome
        }
        else
        {
            printf("The number is not a palindrome number");
        }
        return 0;
}