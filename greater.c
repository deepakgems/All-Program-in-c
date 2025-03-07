#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a:");
	scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    if(a>b)
    {
    	printf("%d is greater",a);
	}
	else
	{
		printf("%d is greater",b);
	}
	return 0;
	}