// Online C compiler to run C program online
#include<stdio.h>
void main()
{
    int n,rem;
    int sum=0;
    printf("Enter value of n:");
    scanf("%d", &n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d", sum);
}
