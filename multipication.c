#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],multi[10][10],r,c,i,j,k;
	printf("Enter the number of Row- ");
	scanf("%d",&r);
	printf("Enter the number of column- ");
	scanf("%d",&c);
	printf("Enter the first matrix Element\n");
	for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
	scanf("%d",&a[i][j]);
}
}
	printf("Enter the Second matrix Element\n");
	for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
	scanf("%d",&b[i][j]);
}	
}
    printf("muitpily of the matrix=\n ");
    for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
	multi[i][j]=0;
	for(k=0;k<c;k++)
{
	multi[i][j]+=a[i][k]*b[k][j];	
}
}
}
	for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
{
	printf("%d\t ",multi[i][j]);
}
	printf("\n");
}
		return 0;	       
}