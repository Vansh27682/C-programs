//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,SI,CI;
    printf("Principal amount:");
    scanf("%f",&p);
    printf("Rate of interest (p/a):");
    scanf("%f",&r);
    printf("Time period (in yr):");
    scanf("%f",&t);

    // calculating the simple and compound interest.

    SI= (p*r*t)/100; //SIMPLE INTEREST

    CI= p*pow(1+(r/100.0),t)-p; //COMPOUND INTEREST

    printf("Simple Interest=%.2f",SI);
    printf("\nCompound Interest=%.2f",CI);

    return 0;
}