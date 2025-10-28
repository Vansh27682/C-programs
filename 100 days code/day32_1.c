//merge two arrays
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    int m;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&m);
    int brr[m];
    for(i=0;i<m;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&brr[i]);
    }
    int c[m+n];
    for(i=0;i<n;i++)
    {
        c[i]=arr[i];
    }
    for(j=0;j<m;j++)
    {
        c[i+j]=brr[j];
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d",c[i]);
    }
    return 0;


}