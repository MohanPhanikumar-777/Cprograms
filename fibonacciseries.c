// Online C compiler to run C program online
#include <stdio.h>
void main()
{
  int n,i;
  int a=0,b=1,c;
  printf("Enter n :");
  scanf("%d",&n);
  printf("%d%d",a,b);
  for(i=2;i<n;++i)
  {
     c=a+b;
      printf("%d",c);
      a=b;
      b=c;
  }
}
