#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j;
	int n,m;

	printf("Enter rowr and columns : ");
	scanf("%d,%d",&n,&m);

	printf("Enter matrix A : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n---------------------------\n");

	printf("\n\nEnter matrix B : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n--------------------------\n\n");
	printf("matrix C[A+B] : \n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] = a[i][j]+b[i][j];
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}