
// 5 * 7
// '*' : operator
// 5,7 : operand 

//Arithmetic : +,-,*,/,%(modulo)
#include<stdio.h>
// #include<conio.h>
void main()
{
	int a,b;
	char ch='A';
	// clrscr();
	jay:
	printf("Enter 2 numbers  : ");
	scanf("%d%c%d",&a,&ch,&b);

	if(ch=='+')
	{
		printf("%d + %d = %d\n",a,b,a+b);
	}
	else if(ch=='-')
	{
		printf("%d - %d = %d\n",a,b,a-b);
	}
	
	else if(ch=='*')
	{
		printf("%d * %d = %d.\n",a,b,a-b);
	}
	else if(ch=='/')
	{
		printf("%d / %d = %d\n",a,b,a/b);
	}
	else if(ch=='%')
	{
		printf("%d %% %d = %d\n",a,b,a%b);
	}
	else
	{
		printf("Enter valid operator .....");
	}

	getchar();
	printf("Do you want to repeat [y/n]: ");
	scanf("%c",&ch);
	if(ch=='y' || ch=='Y')
	{
		// clrscr();
			goto jay;
	}

	// getch();
}