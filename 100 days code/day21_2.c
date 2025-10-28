//wap to check whether a number is perfect or not

#include<stdio.h>
int main()
{
    int num,a=0,fact;
   printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<num;i++)
    {
        if (num%i==0)
        {
            fact=i;
            a=a+fact;
        }
       
    }
    if(a==num)
    {
        printf("The number is a perfect number.");
    }
    else
    {
        printf("The number is not a perfect number");
    }
    return 0;

}