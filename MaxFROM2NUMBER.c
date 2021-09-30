#include<stdio.h>
int main()
{
	int a,b,max;

	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	if(a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
		printf("%d is max.",max);

}