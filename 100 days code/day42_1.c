//wap to count no. of consonants and vowels in a string
#include<stdio.h>
int main()
{
    char str[100];
    int v=0,c=0;
    char ch;
    printf("Enter a string:");
    scanf("%s", str);
    for(int i=0;str[i]!='\0';i++){
        ch=str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
                v++;
            }
            else {
                c++;
            }
        }
    }
    printf("VOWELS:%d\n",v);
    printf("CONSONANTS:%d",c);
    return 0;
}