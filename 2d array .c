#include<stdio.h>
int main()
{

	int a[1][2]={10,20};
	int i,j;
	printf("2D array \n");
	for(i=0; i<1; i++)
	{
	
		for(j=0; j<2; j++)
	{
    	printf("%d",a[i][i]);
   }
    	printf("\n");
	
	}
		return 0;
}