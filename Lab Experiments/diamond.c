//wap to print a diamond

#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("ROWS:");
    scanf("%d", &r);
    if(r%2!=0){
    for (i=1;i<=r;i++)
    {
        if(i<=(r+1)/2)
        {
            for(j=1;j<=(r+1)/2-i;j++)
            {
                printf("   ");
            }
            for(k=1;k<=2*i-1;k++)
            {
                printf(" * ");
            }
        }
        else
        {
            for(j=1;j<=i-(r+1)/2;j++)
            {
                printf("   ");
            }
            for(k=1;k<=2*(r-i)+1;k++)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}
else{
    printf("only odd no. of rows are permissible");
}
return 0;
}