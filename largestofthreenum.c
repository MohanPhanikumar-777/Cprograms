// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int a,b,c;
    printrf("Enter the values of a,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest",a);
        }
    }
    else if(b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}
