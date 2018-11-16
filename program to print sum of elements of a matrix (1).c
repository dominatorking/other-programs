//aim: program to print sum of elements of a matrix
#include<stdio.h>
void main()
{	
	int rows,column;
	printf("enter number of rows and columns\n");
	scanf("%d%d",&rows,&column);
	int a[rows][column],i,j,sum=0;
printf("enter matrix\n");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<column;j++)
	{
	printf("enter a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<rows;i++)
	{
	for(j=0;j<column;j++)
	{
	sum=sum+a[i][j];
	}
	printf("\n");
	
	//sum =0;
}
printf("the sum of elements are=%d",sum);
}
