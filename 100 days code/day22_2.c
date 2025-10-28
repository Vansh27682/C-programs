//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    float sum = 0;

    for (int i = 1; i <= 2 * n - 1; i += 2)
    {
        sum += (float)i / (i == 1 ? 1 : i + 1);
    }

    printf("Sum of the series = %.2f\n", sum);
    return 0;
}