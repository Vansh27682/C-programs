/*Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include<stdio.h>
int main()
{
    int r,c;
    printf("ROWS: ");   //taking rows and coloumns from the user
    scanf("%d",&r);
    printf("COLOUMNS: ");
    scanf("%d",&c);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}