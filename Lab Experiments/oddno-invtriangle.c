//wap to print odd number inverted triangle
#include<stdio.h>
int main()
{
    int r,a,i,j;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=r;i>0;i--){
        a=1;
        for (j=1 ; j<=i ; j++)
        {
            printf(" %d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}