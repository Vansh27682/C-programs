//wap to print a 0 and 1 triangle

#include<stdio.h>
int main()
{
    int r,j,i;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            if((j+i)%2==0){
                printf(" 1 ");
            }
            else{
                printf(" 0 ");
            }
        }
        printf("\n");
    }
    return 0;
}