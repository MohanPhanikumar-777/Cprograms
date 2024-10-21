#include<stdio.h>

void main()
{
int a,b,c,large;
printf("Enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
large = (a>b&&a>c)?a:((b>c)?b:c);
printf("largest number of %d",large);
}
