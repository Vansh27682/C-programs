//wap to print a rhombus

#include<stdio.h>
int main()
{
    int i,j,s,k;
    printf("SIDE:");
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        for(j=1;j<=s-i;j++){
            printf("   ");
        }
        for(k=1;k<=s;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}