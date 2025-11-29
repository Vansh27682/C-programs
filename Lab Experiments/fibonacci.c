//write a program to print fibonacci series

#include<stdio.h>
int main()
{
    int t1=0,t2=1,n,nt;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("%d ",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return 0;
}