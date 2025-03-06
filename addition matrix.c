#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,k,r,j;
	printf("enter the number of row");    
scanf("%d",&r);    
printf("enter the number of column");    
scanf("%d",&j); 
	
	printf("\n enter tha value for first matrix\n:");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("value of [%d][%d]=",i,k);
			scanf("%d",&a[i][k]);
		}
	}
	printf("Your First Matrix - \n");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d  ",a[i][k]);
		}
		printf("\n");
	}
	printf("\n enter the value second matrix\n");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("value of [%d][%d]=",i,k);
			scanf("%d",&b[i][k]);
		}
	}
	printf("Your Second Matrix - \n");
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d  ",b[i][k]);
		}
		printf("\n");
	}
	printf("The Addition of both matrix are - \n");	
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			c[i][k]=a[i][k]+b[i][k];	
		}
	}
		for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			printf("%d\t",c[i][k]);	
		}
		printf("\n");
	}
	return 0;
}