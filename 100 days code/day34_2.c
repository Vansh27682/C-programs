//delete an element from an array 
#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the index of element you want to delete:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
return 0;
}