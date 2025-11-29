//rotate an array by k element
#include<stdio.h>
int main()
{
    int n,i,k;
    printf("NO. OF ELEMENTS= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("The element of index %d = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k=");
    scanf("%d",&k);
    if(k>n){
        k=k%n;
    }
    for(i=0;i<n/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<k/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[k-i-1];
        arr[k-1-i]=temp;
    }
    for(i=0;i<(n-k)/2;i++){
        int temp;
        temp=arr[k+i];
        arr[k+i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    
for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
return 0;
}


