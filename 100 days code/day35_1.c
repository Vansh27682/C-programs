//find the second largest element in the array
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
    int max=arr[0],smax=arr[1];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(smax<arr[i]&& arr[i]<max)
        {
            smax=arr[i];
        }
    }
    printf("SECOND LARGEST ELEMENT=%d",smax);
}