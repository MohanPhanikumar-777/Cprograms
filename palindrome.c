// Online C compiler to run C program online
#include<stdio.h>
void main()
{
    int n,rem,temp;
    int rev=0;
    printf("Enter value of n:");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp == rev)
    {
        printf("it is palindrome");
    }
    else{
        printf("it is not palindrome");
    }
}
