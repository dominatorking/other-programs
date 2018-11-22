//aim: program which can clear the concept of pointer in c

#include<stdio.h>
int main()
{
int a=4;								//variable
printf("value of a is %d\n",a);
printf("address of a is %p\n",&a);
int *p=&a;								//pointer to integer
printf("value of p is %p\n",p);
printf("value at the location pointed by p is %d\n",*p);
printf("address of p is %p\n",&p);
int **q=&p;								//pointer to pointer
printf("value of q is %p\n",q);
printf("value at the location pointed by q is %p\n",*q);

printf("value at the location pointed by p(now p is pointed by q) is %d\n",**q);
return 0;
}
