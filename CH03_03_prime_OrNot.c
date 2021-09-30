
#include<stdio.h>
int main()
{
	int num,f = 1,i;

	printf("Enter the number : ");
	scanf("%d",&num);

	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			f = 0;
			break;
		}
	}
	if(f)
	{
		printf("%d is prime number...\n",num);
	}
	else
	{
		printf("%d is not prime number...\n",num);
	}
}