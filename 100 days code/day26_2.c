/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*                  */
#include<stdio.h>
int main()
{
    int f,i,j;
    printf("Enter no. of fringe= ");
    scanf("%d",&f);
    for(i=1;i<=f;i++) 
    {
        if(i<=(f/2)+1)
        {
            for (j=1;j<=2*i-1;j++)
            {
                printf("*");
                printf("\n");
            }
        }
        else
        {
            for (j=1;j<=2*(f-i)+1;j++)
            {
                printf("*\n");
            }
        }
        printf("\n");
    }
    return 0;
}