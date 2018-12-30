
#include<stdio.h>
#include<math.h>
int main()
{
int a=3,b=2;
int c=sqrt(a*a+b*b);
if(sqrt(a*a+b*b)==c)            //if sqrt(a*a+b*b) give a float type value then it never equals to c
printf("hi");
else
printf("bye");
}
