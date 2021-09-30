
#include<stdio.h>
int main()
{
	int a[10] = {9,8,7,6,5,4,3,2,1,0}; //compile time
	int i;

	// printf("Data %d\n",a[1] );
	// printf("Data %d\n",a[2] );
	// printf("Data %d\n",a[3] );
	// printf("Data %d\n",a[4] );

	for(i=0;i<10;i++)
	{
		printf("a[ %d ] = %d\n",i,a[i]);
	}

}