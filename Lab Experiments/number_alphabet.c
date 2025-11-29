//wap to print a number alphabet triangle

#include <stdio.h>

int main()
{
    int a,k,i,j,r;
    printf("ROWS:");
    scanf("%d",&r);
    for (i=1; i<=r ; i++){
        a=65;
        if (i%2!=0){
            for(j=1;j<=i;j++){
                printf(" %d ",j);
            }
        }
            else{
                for(k=1;k<=i;k++){
                    char ch=(char)a;
                    printf(" %c ",ch);
                    a++;
                }
            }
            printf("\n");
        }
        return 0;
    }
