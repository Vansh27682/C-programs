//check whether a number is palindrome or not.

#include<stdio.h>
int main()
{
    int n,rem,rev=0,N;
    printf("enter a number:");
    scanf("%d",&n);
    N=n;
    while (N!=0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N=N/10;
    }
    if(rev==n){
        printf("The number is a palindrome number.");
    }
    else
    {
        printf("The number is not a palindrome number.");
    }
    return 0;
}