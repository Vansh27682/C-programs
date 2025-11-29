//wap to print a mast numerical equilateral triangle 

#include<stdio.h>
int main()
{
    int i,k,j,r,a;
    printf("ROWS:");
    scanf("%d", &r);
    for(i=1;i<=r;i++){
        a=0;
        for(j=1;j<=r-i;j++){
            printf("   ");
        }
        for (k=1;k<=2*i-1;k++){
            if(k<=(2*i)/2){
                a++;
                printf(" %d ",a);
                
            }
            else{
                a--;
                printf(" %d ",a);
            }
        }
        printf("\n");
    }
    return 0;

}