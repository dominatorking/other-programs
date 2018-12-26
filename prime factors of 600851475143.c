#include<stdio.h>
int main()
{
  long long i,j,ctr=0,a;
  for(i=1;i<600851475143;i++)
  {
     for(j=1;j<=i ;j++)
  {
      if(i%j==0&&j!=1&&j!=i)
      {
          break;
      }
      else
      {
         if(i%j==0&&(j==1||i==j))
         {
             ctr++;
         }
      }
  }
  if(ctr==2)
  {
      if(600851475143%i==0)
      {
          a=i;
          printf("\n%lld",a);
      }

      ctr=0;
  }
  else
  {
      ctr=0;
  }
  }
printf("\n%lld",a);
}
