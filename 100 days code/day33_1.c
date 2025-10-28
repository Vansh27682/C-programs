//Search in a sorted array using binary search.
#include<stdio.h>
int main()
{
    int n,i,s,high,low,mid;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter an element to search: ");
    scanf("%d",&s);
    high=n-1;
    low=0;
    mid=(low+high)/2;
    for(i=0;i<n;i++)
    {
        if(arr[mid]<s)
        {
            low=mid;
            high=high;
            mid=(low+high)/2;
        }
        else
        {
            low=low;
            high=mid;
            mid=(low+high)/2;
        }
    }
    for(i=low;i<=high;i++)
    {
        if(arr[i]==s)
        {
            printf("Found at index: %d",i);
        }
    }
    return 0;
   
}