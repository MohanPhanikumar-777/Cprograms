// Online C compiler to run C program online
#include <stdio.h>
void main()
{
  int n,i;
  int sum=0;
  printf("Enter n :");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
      if(i%2==0)
      {
          sum=sum+i;
      }
      }
      printf("%d",sum);
  }
