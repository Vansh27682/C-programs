//Count positive, negative, and zero elements in an array.

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
    int pos=0,neg=0,z=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if(arr[i]>0){
            pos++;
        }
        else{
            z++;
        }
    }
    printf("POSITIVE ELEMENTS= %d\n",pos);
    printf("NEGATIVE ELEMENTS= %d\n",neg);
    printf("ZERO ELEMENTS= %d",z);
    return 0;
}