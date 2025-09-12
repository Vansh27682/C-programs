//write a code to swap two variable without using third variable 
#include<stdio.h>
int main()

{
    int a,b;
    printf("First number:");
    scanf("%d",&a);
    printf("second number:");
    scanf("%d",&b);
    printf("\nBefore Swap:%d,%d",a,b);
    a=a+b;
    b=a-b;       //b = (a+b)-b = a
    a=a-b;       //a = (a+b)-a =b
    printf("\nAfter Swap:%d,%d",a,b);
    return 0;
     
}
   