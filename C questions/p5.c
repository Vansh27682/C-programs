/*Problem 2(b): Write a program to determine whether a student has passed or failed his examination
 if he needs to get 33% in each subject and 40% overall and take the input marks from the user.*/
 #include<stdio.h>
 int main()
 {
 int S1 ,S2 ,S3;
 printf("Marks in subject 1: ");
 scanf("%d",&S1);
 printf("Marks in subject 2: ");
 scanf("%d",&S2);
 printf("Marks in subject 3: ");
 scanf("%d",&S3);
 int sum;
 sum= S1+S2+S3;
 if (S1 > 100 || S2 > 100 || S3 > 100 || S1 < 0 || S2 < 0 || S3 < 0)
 {
   printf("wrong input entered");
   return 0;
 }
 //op is the overall percentage
 float op;
 op= sum*100.0/300.0;
 printf("Overall Percentage:%.2f",op);
 if (op>=40 && S1>=33 && S2>=33 && S3>=33)
 {
    printf("\nResult status: Passed");
    return 0;
 }

 else
 {
    printf("\nResult status: Failed");
    return 0;
 }
 return 0;
}

 
    

