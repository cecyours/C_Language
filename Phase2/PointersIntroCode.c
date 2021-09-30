// pointer is a variable which is used to store an address of another variable
#include<stdio.h>
void main()
{
	int a=1,b=2,c=3;
	int *p = &a;

	printf("Address of a : %u \t %d\n",&a,a);
	printf("Address of b : %u \t %d\n",&b,b);
	printf("Address of c : %u \t %d\n",&c,c);

	// printf("\n-------------------------\n");
	// printf("address in p : %u\n",p);
	// printf("-------------------------\n");

	p = p - 1; // b
	printf("\naddress in p : %u and data : %d\n",p,*p);

	p = p - 1; // c
	printf("address in p : %u and data : %d\n",p,*p);

	p = p + 2; // note we cant use &(multiplication) as well as division..n
	printf("address in p : %u and data : %d\n",p,*p);



}