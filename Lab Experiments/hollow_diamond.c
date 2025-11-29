//wap to print a hollow diamond

#include<stdio.h>
int main()
{
    int i,j,k,r;
    printf("ROWS:");
    scanf("%d", &r);
    for(i=1;i<=r;i++)
    {
        if(i<=(r+1)/2)
        {
            for(j=1;j<=(r+1)/2-i;j++)
            {
                printf("   ");
            }
            for(k=1;k<=2*i-1;k++)
            {
                if(k==1 || k==2*i-1)
                {
                    printf(" * ");
                }
                else
                {
                    printf("   ");
                }
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
                if(k==1 || k==2*(r-i)+1)
                {
                printf(" * ");
                }
                else{
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}