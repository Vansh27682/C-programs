//reverse an array without taking extra space
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
    int li=n-1; //last index 
    int temp;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[li-i];
        arr[li-i]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}