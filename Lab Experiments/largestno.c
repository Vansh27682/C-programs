//Find the largest among three numbers entered by the user
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Num1:");
    scanf("%d",&a);
    printf("Num2:");
    scanf("%d",&b);
    printf("Num3:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is largest number",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is largest number",b);
    }
    else if (c>a && c>b)
    {
        printf("%d is largest number",c);
    }
    else
    {
        printf("Please enter distinct values for comparison");
    }
    return 0;
}