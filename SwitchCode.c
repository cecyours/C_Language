
#include<stdio.h>
int main()
{
	int choice;

	printf("Enter day code [1-7] : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("Monday\n");break;
		case 2:printf("Tuesday\n");break;
		case 3:printf("Wednesday\n");break;
		case 4:printf("Thursday\n");break;
		case 5:printf("Friday\n");break;
		case 6:printf("saturday\n");break;
		case 7:printf("Sunday\n");break;
		default:printf("invalid input..");
	}
}