//Read and print elements of a one-dimensional array.

#include<stdio.h>
int main()
{
    int n,i;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}
