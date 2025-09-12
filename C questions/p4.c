/*Problem 2(a): Write a code to grade a student on the basis of the marking scheme below
90-100:A
80-89:B
65-79:C
50-64:D
33-49:E 
below 33:f
*/

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks of the student: ");
    scanf("%d",&marks);
    if (marks>=90&&marks<=100){
        printf("Student scored grade A");
    }
    else if(marks>=80 && marks<=89){
         printf("Student scored grade B");
    }
    else if (marks>=65 && marks<=79){
         printf("Student scored grade C");
    }
    else if(marks>=50&&marks<=64){
         printf("Student scored grade D");45
    }
    else if(marks>=33 && marks<=49){
         printf("Student scored grade E");
    }
    else if (marks<33){
         printf("Student scored grade F");
    }
    else
    {
        printf("Wrong input entered");
    }
    return 0;
}
