//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER:"); //taking input from the user.
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER:");
    scanf("%d",&c);

    if (a>b && a>c)  //checking for the largest value
    {
        printf("Largest Value: %d\n",a);    
    }
    else if (b>a && b>c)
    {
        printf("Largest Value: %d\n",b);
    }
    else if (c>b && c>a)
    {
        printf("Largest Value: %d\n",c);
    }
    else
    {
        printf("Please enter distinct values."); //if the user entered all same values
    }
    return 0;

}