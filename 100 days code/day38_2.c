//check if the matrix is symmetric or not
#include<stdio.h>

int main()
{
    int r, c, i, j;
    int flag = 1;

    printf("ROWS: ");
    scanf("%d", &r);

    printf("COLUMNS: ");
    scanf("%d", &c);

    int arr[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element at (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    if(r != c){
        printf("\nNot symmetric (not a square matrix).\n");
        return 0;
    }

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j] != arr[j][i]){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("\nSymmetric = YES\n");
    else
        printf("\nSymmetric = NO\n");

    return 0;
}