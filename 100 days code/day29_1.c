//Find the sum of array elements.

#include<stdio.h>
int main()
{
    int n,i;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of all the elements of array = %d",sum);
    return 0;
}