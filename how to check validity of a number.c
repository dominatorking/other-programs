//created by:yash mathur
//os:windows(64 bit)
//compiled on(code blocks v16.01)
//aim:program which checks the validity of a number
#include<stdio.h>
void main()
{
    char a[11];
    int i,k=0;
    printf("enter a valid number");
    for(i=0;i<10;i++)
        scanf("%c",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
            k++;
        else
            continue;

    }
    if(k==10)
    {
       printf("\n you entered a valid number");
      for(i=0;i<10;i++)
            printf("%c",a[i]);
    }
    else
    {
        printf("\n you entered a  invalid number");
    }

}
