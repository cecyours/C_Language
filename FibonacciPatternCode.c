
/*
	fibonacci series mean sum of 2 previous number would be the next number.
	like ;
	0 , 1 , 1 , 2 , 3 ,5 ,8, ...

*/

/*
Algorithem:

step 1: start
step 2: input n
step 3: take a = -1,b = 1
step 4: repeat while n>0:
		c = a+b
		output c
		a = b
		b = c
		n = n-1
step 5: stop

*/
#include <stdio.h>
int main()
{
		int n,a=-1,b=1,c;

		printf("Enter the number : ");
		scanf("%d",&n);

		while(n>0)
		{
			c = a+b;
			printf("%d\n",c);
			a = b;
			b = c;
			n--;
		}

	return 0;
}