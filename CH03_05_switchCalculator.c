
#include<stdio.h>
 

void calculate(int a,char c,int b)
{
	switch(c)
	{
		case '+': printf("%d + %d = %d\n",a,b,a+b);break;
		case '-': printf("%d - %d = %d\n",a,b,a-b);break;
		case '*': printf("%d * %d = %d\n",a,b,a*b);break;
		case '/': printf("%d / %d = %d\n",a,b,a/b);break;
		case '%': printf("%d %% %d = %d\n",a,b,a%b);break;
		default:printf("invalid operator...");
	}
}
int main()
{

	int a,b;
	char c;
	char choice = 'Y';
	do{

		printf("Enter expression : ");
		scanf("%d%c%d",&a,&c,&b);//4+6
		calculate(a,c,b);

		getchar(); //getch();
		printf("Enter 'n' or 'N' to exit ... [y/n] : ");
		scanf("%c",&choice);

		system("clear"); // clrscr();
	}while(choice != 'N' && choice != 'n');
}