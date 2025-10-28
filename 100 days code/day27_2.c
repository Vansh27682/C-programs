/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *     */

#include<stdio.h>
int main()
{
    int r,i,j,k;
    printf("ROWS: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        if(i<=(r+1)/2)
        {
            for(j=1;j<=((r+1)/2)-i;j++)
            {
                printf(" ");
            }
            for(k=1;k<=2*i-1;k++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1;j<=i-(r+1)/2;j++)
            {
                printf(" ");
            }
            for(k=1;k<=2*(r-i)+1;k++)
            {
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;
}