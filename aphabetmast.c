//wap to print alphabet mast triangle

#include<stdio.h>
int main()
{
    int r,i,j,k,a;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    for (i=1;i<=r;i++){
        a=65;
        for(j=1;j<=r-i;j++){
            printf("   ");
        }
        for (k=1;k<=i;k++){
            char ch= (char)a;
            printf(" %c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}