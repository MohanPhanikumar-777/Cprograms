// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n,i;
  int sum1,sum2=0;
  printf("Enter n :");
  scanf("%d",&n);
  for(i=1;i<=n;++i)
  {
      if(i%2==0)
      {
          sum1=sum1+i;
      }
      else
      {
          sum2=sum2+i;
      }
  }
      printf("%d", abs(sum1-sum2));
  }
