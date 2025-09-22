//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() 
{
    int num, rem, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        rem = num % 2;
        binary = binary + rem * place;
        num = num / 2;
        place = place * 10;
    }

    printf("Binary representation: %d\n", binary);

    return 0;
}