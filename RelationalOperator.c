
#include<stdio.h>
// #include<conio.h>
void main()
{
	int a,b;
	// clrscr();
	
	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	// printf("value : %d\n",a>b); //0 means false , non-zero true.
	if(a>b)
	{
		printf("true : %d is greater than %d\n",a,b);
	}
	else
	{
		printf("false : %d is not greater than %d\n",a,b);
	}

	printf("-------------------------\n");
	if(a<b)
		printf(" true : %d is less than %d\n",a,b);
	else
		printf("false : %d is not less than %d\n",a,b);

	printf("-------------------------\n");

	if(a>=b)
		printf("true : %d is greater than or equals to %d\n",a,b);
	else
		printf("false : %d is not greater than or equals to %d\n",a,b);

	printf("-------------------------\n");

	if(a<=b)
		printf("true : %d is less than equals to %d\n",a,b);
	else
		printf("false : %d is not less than equals to %d\n",a,b);
	printf("-------------------------\n");


	if(a==b)
		printf("true : %d is equals to %d\n",a,b);
	else
		printf("false : %d is not equals to %d\n",a,b);
	printf("-------------------------\n");

	if(a!=b)
		printf("true : %d is not equals to %d\n",a,b);
	else
		printf("false : %d is equals to %d\n",a,b);

	// getch();


}