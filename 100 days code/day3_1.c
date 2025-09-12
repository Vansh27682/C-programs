//problem 3(a): convertion of temp to degree farenheit from celcius.
#include<stdio.h>
int main()
{
    //c= temp in degree celcius, f= temp in degree farenheit
    float c ,f;
    printf("Temperature in degree celcius: ");
    scanf("%f",&c);
    f= (9/5)*c+32;
    printf("\nTemperature in degree farenheit: %.3f",f);
    return 0;
}