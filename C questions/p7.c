//Write a code to check whether a number is an armstong number or not.

#include<stdio.h>

int main()
{
    int num,n,sum,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    n=num;
    sum=0;
    while (n!=0)
    {
      digit=n%10;
      sum=sum+(digit*digit*digit);
      n=n/10;
    }
    if (num==sum)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    return 0;
}
