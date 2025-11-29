//Find the sum of all multiples of 3 or 5 below 1000
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<1000;i++)                 //note that 1000 won't be included.
    {
        if(i%3==0 || i%5==0)
        {
            sum=sum+i;
        }
    }
    printf("Required sum = %d",sum);
    return 0;
}