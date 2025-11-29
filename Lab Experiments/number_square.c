/*wap to print a number square
  1  2  3  4
  1  2  3  4
  1  2  3  4
  1  2  3  4...*/

#include <stdio.h>
int main ()
{
    int s,i,j;
    printf("SIDE=");
    scanf("%d",&s);
    for ( i=1 ; i<=s ; i++){
        for ( j=1 ; j<=s ; j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}