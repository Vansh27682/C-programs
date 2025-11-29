//wap to print an inverted alphabet triangle

#include<stdio.h>
int main()
{
    int a,r,i,j;
    printf("ROWS:");
    scanf("%d", &r);
    for(i=r ; i>0 ; i--){
        a=65;
        for(j=1 ; j<=i ; j++){
            char ch=(char)a;
            printf(" %c ",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}