//Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    printf("ROWS:");
    scanf("%d",&r);
    printf("COLOUMNS:");
    scanf("%d",&c);
    int arr[r][c],srr[r];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        {
        printf("Enter the element at index (%d,%d):",i,j);
        scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum=sum+arr[i][j];
            srr[i]=sum;
        }
        sum=0;
    }
    for(i=0;i<r;i++)
    {
        printf("\nSUM OF ELEMENTS OF ROW %d: %d",i+1,srr[i]);
    }
    
    return 0;
}