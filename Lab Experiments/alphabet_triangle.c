//wap to print alphabet triangle

#include<stdio.h>
int main()
{
    int a,i,j,r;
    printf("ROWS:");
    scanf("%d", &r);
    for(i=1 ; i<=r ; i++){
        a=65;
        for(j=1 ; j<=i ; j++)
        {
            char ch=(char)a;
            printf(" %c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}