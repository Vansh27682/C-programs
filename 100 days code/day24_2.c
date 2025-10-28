/*Write a program to print the following pattern:
1
12
123
1234
12345*/

#include<stdio.h>

int main()

{
    int r;
    printf("ROWS: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
     }
    return 0;
}

