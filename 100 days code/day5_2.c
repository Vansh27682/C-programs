//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int t,m,h,s;

    printf("Enter time (in sec):");
    scanf("%d",&t);

    h=t/3600; //conversion to hour
    t=t%3600; //seconds left after hours 
    m=t/60;   //convertion to minutes
    t=t%60;   //seconds left after min
    s=t;      //the left over seconds are the seconds that will be displayed
    
    
    printf("Time in hours:minutes:seconds format= %d:%d:%d",h,m,s);

    return 0;

}