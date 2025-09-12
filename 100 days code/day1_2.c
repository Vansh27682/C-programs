//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int num1,num2,sum,product,diff,quotient;

    printf("Enter first number: ");
    scanf( "%d", &num1);      //taking input from the user.
    printf("Enter second number: ");
    scanf( "%d" ,&num2);

    sum = num1 + num2;        //calculating the sum
    printf("\nSum:%d",sum);

    diff = num1-num2;   //calculating difference
    printf("\nDifference:%d",diff);
    product = num1*num2;     //calculating product
    printf("\nProduct:%d",product);
    if (num2!=0)         
    {
         quotient = num1/num2;     //calculating quotient
         printf("\nQuotient:%d",quotient);
    }
    else 
    {
          printf("\nQuotient: NOT DEFINED");
        
    }

    return 0;
    
}