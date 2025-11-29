//wap to print a mast triangle.


#include<stdio.h>
int main()
{
    int i,j,r,k;
    printf("ROWS:");
    scanf("%d", &r);
    for(i=1;i<=r;i++){
        for(j=r-i;j>0;j--){
            printf("   ");
        }
        for(k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}