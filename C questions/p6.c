//Write a code to check whether a number is a palindrome number or not.

#include<stdio.h>

int main()

{
    int num,n,rev,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;
    rev=0;
    while (n>0)
    {
        digit=n%10;
        rev=rev*10 +digit;
        n=n/10;
    }
    if (num==rev)
    {
        printf("%d is a palindrome number",num);
    }
    else
    {
        printf("%d is not a palindrome number.",num);
    }
    return 0;
}