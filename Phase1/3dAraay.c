#include<stdio.h>
int main()
{
		int a[10][10][10];
		int x,y,z;//for loops
		int i,j,k;
		int counter=0;

		printf("Enter tables,rows,columns : ");
		scanf("%d,%d,%d",&x,&y,&z);

		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				for(k=0;k<z;k++)
				{
					a[i][j][k] = ++counter;
				}
			}
		}

		printf("data : \n\n");
	
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				for(k=0;k<z;k++)
				{

					printf("%3d ",a[i][j][k]);

				}
				printf("\n");
			}
			printf("\n");
		}		
}