
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter [start-end] : ");
	scanf("%d-%d",&start,&end);


	i = start;

	while(i<=end)
	{
		printf("Line %3d : %d\n",i,i*i);
		i++;
	}

	/*
		initilization

		while(condtion)
		{
				//code 

				increment/decrement
		}

	*/

}