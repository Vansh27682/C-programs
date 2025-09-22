//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet:");
    scanf("%c",&c);
    if (c>='A' && c<='Z' || c>='a' && c<='z') //Checking whether the input is alphabet or not
    {
        if (c>='A' && c<='Z')
        {
            c=c+32; //ASCII converstion 
        }
         if (c=='a'||  c=='e' ||c=='i'|| c=='o'|| c=='u')
    {
        printf("The alphabet entered is a vowel");
    }
    else{
        printf("The alphabet entered is a consonant");
    }
    }
    
    else
    {
        printf("Please enter an alphabet");
        
    }


    return 0;
}