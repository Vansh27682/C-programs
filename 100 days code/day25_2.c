/*wap to print the pattern
     *****
      ****
       ***
        **
         *       */

#include<stdio.h>
int main()
{
    int r,i,j,k;
    printf("ROWS: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=r;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}