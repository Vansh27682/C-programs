//wap to print a cross

#include<stdio.h>
int main()
{
    int i,j,s;
    printf("SIDE:");
    scanf("%d", &s);
    int c=1+s;    // c for any integer constant 
    for (i=1;i<=s;i++){
        for (j=1;j<=s;j++)
        if(j==i || j+i==c){
            printf("* ");
        }
        else{
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}