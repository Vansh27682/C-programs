//wap to print a number triangle.

#include<stdio.h>
int main()
{
    int r,i,j;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=1 ; i<=r ; i++){
        for (j=1 ; j<=i ; j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}