
/*
	there are 2 ways to define constant .
	1 : const keyword (pure constant)
	2 : #define (weak constant) 
*/
#include<stdio.h>
// #include<conio.h>

#define PI 3.14  // way 2
int main()
{

	const int A=10; // constant // way1
	// clrscr();
		
		// A = 100; //gives error
		// PI = 34; //gives error

		printf("value of A : %d\n", A);
		printf("value of PI : %.2f\n",PI);
		//----------------try to break the weak constant
		#undef PI
				#define PI 500
		printf("value of PI : %d\n",PI);

	// getch();
}