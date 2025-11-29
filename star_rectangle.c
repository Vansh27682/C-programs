//wap to print a star rectangle.

#include<stdio.h>
int main()
{
    int r,c;
    printf("Rows:");
    scanf("%d",&r);
    printf("Columns:");
    scanf("%d",&c);
    for (int i=1 ; i<=r ; i++){
        for (int j=1 ; j<=c ; j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}