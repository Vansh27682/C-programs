//wap to print a triangle with odd number inputs
#include<stdio.h>
int main()
{
    int i,j,r,a;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=1;i<=r;i++){
        a=1;
        for (j=1;j<=i;j++){
            printf(" %d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}