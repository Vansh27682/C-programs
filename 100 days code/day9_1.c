//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,D,a,b,c;
    printf("Enter value of coefficients (a,b,c):");
    scanf ("%f%f%f",&a,&b,&c);
    D= (b*b)-4*a*c;
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    printf("QUADRATIC EQUATION:%.1fx^2+%.1f+%.1f\n",a,b,c);
    
    if (D>0)
    {
    printf("The roots are real and distinct:%.1f,%.1f",x1,x2);
    }
    else if(D==0)
    {
    printf("The roots are real and equal %.1f,%.1f",x1,x2);
    }
    else 
    {
    printf("The roots are not real (complex roots)");
    }

    return 0;
}