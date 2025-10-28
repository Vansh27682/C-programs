//Search for an element in an array using linear search.

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
    int s;
    printf("Enter an element to search: ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("Index of the element is: %d",i);
        }
    }
    return 0;
}