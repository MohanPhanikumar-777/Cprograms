#include<stdio.h>

void main()
{
char ch;
printf("Enter ch:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
    printf("VOWEL");
}
else
{
    printf("NOT AN VOWEL");
}
}
