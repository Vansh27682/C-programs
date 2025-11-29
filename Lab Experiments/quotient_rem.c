//Calculate the quotient and remainder of two given numbers.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Numerator:");
    scanf("%d",&num1);
    printf("Denominator:");
    scanf("%d",&num2);
    if(num2 != 0){
        printf("QUOTIENT=%d\n",num1/num2);
        printf("REMAINDER=%d\n",num1%num2);
    }
    else{
        printf("Undefined (denominator can't be zero)");
    }
    return 0;
}