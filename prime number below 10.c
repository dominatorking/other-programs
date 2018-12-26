#include<stdio.h>
int main()
{
  long long i,j,ctr=0;
  for(i=1;i<=10 ;i++)
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
      printf("%lld\n",i);

      ctr=0;
  }
  else
  {
      ctr=0;
  }
  }

}
