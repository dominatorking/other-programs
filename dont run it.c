//#J#r

#include<stdio.h>
void main()
{
int a;
int *p;
for( ; ; )
{
p=&a;
p--;
*p=0;
printf("%d\n",*p);

}
}

