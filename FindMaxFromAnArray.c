
#include<stdio.h>
int main()
{
	float marks[100],max;
	int i,n;

	printf("Enter the no of students  : ");
	scanf("%d",&n);

	printf("Enter marks :\n");
	for(i=0;i<n;i++)
	{
		printf("marks[ %d ] = ",i);
		scanf("%f",&marks[i]);
	}

	max = marks[0];

	for(i=0;i<n;i++)
	{
		if(marks[i] > max)
		{
			max = marks[i];
		}
	}

	printf("\nmax is %.2f\n",max);
}