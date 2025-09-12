//problem 1(c): convertion of temp to degree celcius from farenheit
#include<stdio.h>
int main()
{
    float c ,f;
    printf("Temperature in degree celcius: ");
    scanf("%f",&c);
    f= (9/5)*c+32;
    printf("\nTemperature in degree farenheit: %f",f);
    return 0;
}