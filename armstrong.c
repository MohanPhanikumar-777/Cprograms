// Online C compiler to run C program online
#include<stdio.h>
void main()
{
    int n,rem,temp;
    int sum=0;
    printf("Enter value of n:");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(temp == sum)
    {
        printf("it is armstrong");
    }
    else{
        printf("it is not armstrong");
    }
}
