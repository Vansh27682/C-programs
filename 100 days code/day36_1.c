//read and print a matrix

#include<stdio.h>
int main()
{
    int r,c,i,j;
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
    return 0;
}