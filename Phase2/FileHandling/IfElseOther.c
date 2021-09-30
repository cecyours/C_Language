
#include<stdio.h>
#define A 100

int main()
{

	#undef A

	#define A 10

	#ifdef A 
		printf("A is defined....\n");
	#else 
		printf("A is not defined...\n");
	#endif

// -------------------------------
		#ifndef A
			printf("variable is not defined..\n");
		#else 
			printf("variable is  defined..\n");
		#endif

//----------------------------------------
			#define M 23

			#if M >= 80 && M<=100
				printf("grade a");
			
			#elif M>=60 && M<80
				printf("grade B");

			#else
				printf("Fails...");

			#endif




}