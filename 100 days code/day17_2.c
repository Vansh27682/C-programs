//Write a program to check if a number is prime.
#include <stdio.h>
int main()

 {
    int n, i, rem;

    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("The number is not a prime number");
        return 0;
    }

    for (i = 2; i < n; i++) 
    {
        rem = n % i;
        if (rem == 0) 
        {
            printf("The number is not a prime number");
            return 0;
        }
    }

    printf("The number is a prime number");
    return 0;
}