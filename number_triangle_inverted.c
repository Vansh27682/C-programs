//wap to print inverted number triangle.

#include<stdio.h>
int main()
{
    int i,j,r;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=r ; i>0 ; i--){
        for (j=1 ; j<=i ; j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}