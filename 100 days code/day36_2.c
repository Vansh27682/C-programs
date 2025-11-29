//find the sum of all elements in the matrix
#include<stdio.h>
int main()
{
    int r,c,i,j,sum=0;
    printf("ROWS:");
    scanf("%d",&r);
    printf("COLOUMNS:");
    scanf("%d",&c);
    int arr[r][c];
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
        }
    }
    printf("SUM=%d",sum);
    return 0;
}