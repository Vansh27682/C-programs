//add two matrix

#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("ROWS1:");
    scanf("%d",&r1);
    printf("COLOUMNS1:");
    scanf("%d",&c1);
    printf("ROWS2:");
    scanf("%d",&r2);
    printf("COLOUMNS2:");
    scanf("%d",&c2);
    int arr[r1][c1];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        {
        printf("Enter the element at index (%d,%d):",i,j);
        scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    int brr[r2][c2];
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
        {
        printf("Enter the element at index (%d,%d):",i,j);
        scanf("%d", &brr[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    printf("\n-----SUM MATRIX-------\n");
    int srr[r1][c1];
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                srr[i][j]=arr[i][j]+brr[i][j];
            }
        }
    }
    else{
        printf("Sum cannot be calculated.");
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d",srr[i][j]);
        }
        printf("\n");
    }
}