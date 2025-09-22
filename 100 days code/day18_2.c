//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main()
{
    int n1,n2,max,hcf,i;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    if (n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    for (i=1 ; i<=max ; i++)
    {
        if (n1%i==0 && n2%i==0)
    {
        hcf=i;
    }
    }
    printf("HCF is %d",hcf);
    
    return 0;
    

}