//wap to print right angled inverted triangle.

#include<stdio.h>
int main()
{
    int i,j,r;
    printf("ROWS:");
    scanf("%d", &r);
    for ( i=1; i<=r ; i++){
        for( j=i; j<=r ; j++ ){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}