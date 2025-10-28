//Find the digit that occurs the most times in an integer number.

#include<stdio.h>
int main()
{
    int digit,freq[10]={0},max=0,mfd,i;
    long long int num;
    printf("Enter any integral value: ");
    scanf("%lld",&num);
    while(num>0)
    {
        digit=num%10;
        freq[digit]++;
        num=num/10;
    }
    for(i=0;i<10;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            mfd=i;
        }
    }
    printf("MOST FREQUENT DIGIT: %d",mfd);
    
}