
#include<stdio.h>
int main()
{
	int a[3][2] = {8,5,
		           3,6,
		           7,9};

    int i,j;
    // clrscr();
	printf("Data : %d\n",a[0][1]);

	printf("\n----------------------\n");
	for(i=0;i<3;i++) // for rows
	{
		for(j=0;j<2;j++) // for column
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}