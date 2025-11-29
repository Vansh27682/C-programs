// write a program to print a inverted mast triangle

#include<stdio.h>
int main()
{
    int i,j,k,a,r;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<=i-1;j++){
            printf("   ");
        }
        for(k=r+1-i;k>0;k--){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}