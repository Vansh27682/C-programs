//Determine and output whether a number N is even or odd.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if( n % 2 == 0 ){
        printf("Even");
    }
    else{
        printf("odd");
    }
    return 0;
}