//write a code to print fibonacci series
#include<stdio.h>
int main()
{
    int i,n,term1=0,term2=1,sum,next_term;
    printf("Enter the no. of terms:");
    scanf("%d",&n);
    sum=0;
    for (i=1 ; i<=n ; i++)
    {
        printf("%d", term1);
        next_term=term1+term2;
        term1=term2;
        term2=next_term;  
    }
return 0;
}