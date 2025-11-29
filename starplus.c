//wap to print a star-plus

#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("ROWS:");
    scanf("%d", &r);
    printf("coloumns");
    scanf("%d", &c);
    if(r%2==0 || c%2==0){
        printf("ONLY ODD VALUES ARE PERMISSIBLE");  //taking only odd values of r and c,
    }
    else{
    for (i=1 ; i<=r ; i++){
        if (i!=(r+1)/2){
            for(j=1 ; j<=c ;j++)
            {
                if (j!=(c+1)/2)
                {
                    printf("   ");
                }
            
            else{
                printf(" * ");
            }
        }
        }
        else{
            for(j=1;j<=c;j++)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}
    return 0;
}