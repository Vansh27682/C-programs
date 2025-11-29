//wap to print floyd triangle.

#include<stdio.h>
int main()
{
    int i,j,r,a;
    printf("ROWS:");
    scanf("%d", &r);
    a=1;
    for (i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            printf(" %d ",a);
            a++;
        }
        printf("\n");
    }
   return 0;
}