//wap to check whether a number is a strong number or not
#include<stdio.h>
int fact(int a)
{
    int factorial=1;
    for(int i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
     return (factorial);
}
int main()
{
    int n,sum=0,d;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int N=n;
    while (n>0)
    {
        d=n%10;
        
        sum=sum+fact(d);
        
        n=n/10;
    }
    
    if(sum==N)
    {
        printf("The number is a strong number");
    }
    else{
         printf("The number is not a strong number");
    }
    return 0;

}