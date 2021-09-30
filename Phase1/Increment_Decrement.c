
#include <stdio.h>
void main()
{
	int i=10;

	// #increment 
	// 1 : post increment : 

	printf("During post increment : %d\n",i++); // i = 10 
	printf(" after post increment : %d\n",i); // i = 11


	// 2: pre increment
	printf(" During pre increment : %d\n",++i); // i = 12
	printf("  after pre increment : %d\n",i); // i = 12

	printf("\n--------------------------\n\n");
	// # decrement 
	// 1 post decrement
	printf("During post decrement : %d\n",i--); // i = 12
	printf(" after post decrement : %d\n",i); //i = 11

	// 2 pre decrement
	printf("During pre decrement : %d\n",--i);//i =10
	printf(" after pre decrement : %d\n",i); // i =10


}