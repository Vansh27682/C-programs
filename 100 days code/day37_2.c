//find transpose of a matrix
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
    //finding transpose
    int transpose[c][r];
    
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            transpose[j][i] = arr[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < c; i++){
        for(j = 0; j < r; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

