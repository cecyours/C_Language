// while loop
#include<stdio.h>
int main()
{

	int num,rem;

	printf("Enter the number : ");
	scanf("%d",&num);


	while(num>0)
	{
		rem = num % 10;
		printf("---> %d\n",rem);
		num/=10; // num = num / 10
	}
	/*
		initilization

		while(condition)
		{
				//code 

				increment/decrement
		}

	*/

}