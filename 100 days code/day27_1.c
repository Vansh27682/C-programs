/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*/
#include<stdio.h>
int main()
{
    int r,i,j;
    printf("ROWS: ");
    scanf("%d",&r);
    if(r%2!=0)
    {
    for(i=1;i<=r;i++)
    {
        if(i<=(r+1)/2)
        {
            for(j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j=1;j<=2*(r-i)+1;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
else{
    printf("Please enter odd number of rows.");
}
    return 0;
}