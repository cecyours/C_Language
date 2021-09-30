#include<stdio.h>
int main()
{

	char ch;

	printf("Enter the character : ");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
		printf("character '%c' is a lowercase letter..",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("character '%c' is a uppercase letter..",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("character '%c' is a digit.",ch);
	}
	else{
		printf("character '%c' is a special symbol.. ",ch);
	}
	return 0;
}