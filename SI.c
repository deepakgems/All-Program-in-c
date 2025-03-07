#include<stdio.h>
int main()
{
	float si,p,r,t;
	printf("enter the principal:");
	scanf("%f",&p);
	printf("enter the rate:");
	scanf("%f",&r);
	printf("enter the time");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("%f",si);
	return 0;
}
