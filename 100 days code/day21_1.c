//wap to swap the first and last digit of a number

#include<stdio.h>
#include<math.h>

int main() {
    int n, num, fd, ld, digits = 0, temp, place = 1, middle;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    ld = num % 10;

    // Find first digit and number of digits
    while (num >= 10) {
        num /= 10;
        digits++;
    }
    fd = num;

    // Find middle part
    middle = n % (int)pow(10, digits); // remove first digit
    middle /= 10;                      // remove last digit

    // Construct swapped number
    int result = ld * (int)pow(10, digits) + middle * 10 + fd;

    printf("Swapped number: %d\n", result);
    return 0;
}