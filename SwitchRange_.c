
#include<stdio.h>
int main()
{

	int num;
	printf("Enter the number : ");
	scanf("%d",&num);

	switch(num)
	{
		case 1 ... 10:printf("A \n");break;
		case 10 ... 20:printf("B \n");break;
		default:printf("Error..");
	}
}