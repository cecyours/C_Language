
#include<stdio.h>
void main()
{
	int n,i,j;
	printf(" Enter n : ");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("   ");
		}

		for(j=0;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
