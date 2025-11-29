//write a code to print alphabet square

#include<stdio.h>
int main()
{
    int s,i,j,a;
    printf("SIDE:");
    scanf("%d", &s);
    for (i=1 ; i<=s ; i++){
        a=65;
        for(j=1 ;j<=s ; j++){
            char ch= (char)a;
            printf(" %c ", ch);
            a++;
        }
        printf("\n");

    }
    return 0;
}