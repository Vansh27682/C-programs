//check whether a number is armstrong or not

#include<stdio.h>
#include<math.h>

int main()
{
    int n,N,count=0,armstrong=0,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    N=n;
    while (N!=0)
    {
        N=N/10;
        ++count;
    }
    N=n;
    while(N!=0){
        digit=N%10;
        armstrong=armstrong+pow(digit,count);
        N=N/10;
    }
    if(n==armstrong)
    {
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number.");
    }
}