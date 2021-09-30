// Conditional operator also known as Ternary operator.

// 5 + 7

#include<stdio.h>
void main()
{
	// ("Hey")?printf("Hello\n") : printf("Bye\n");
	// (condition)?truePart:falsePart;
	int a,b,max;

	printf("Enter 2 numbers : ");
	scanf("%d,%d",&a,&b);

	max = (a>b)?a:b; // if a is greater than b then it returns as 'a' else 'b'

	printf("max is %d\n",max);


}	