/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include<stdio.h>
int main()
{
    int r,i,j,k;
    printf("ROWS: ");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for (k=i;k<=r;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}