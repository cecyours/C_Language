
#include<stdio.h>
// #include<conio.h>
void main()
{

	int a=12,b=10,c=5;
	//clrscr();

		/*
			// logical (AND ) '&&'
			 A      B       A&&B
			 ----------------------
			 0      0    	0  
			 0      1       0
			 1      0       0
			 1      1       1

		*/
		if(a==b && c!=b) // gives true if both are true otherwise false.
		{
			printf("AND True\n");
		}
		else
		{
			printf("AND false...\n");
		}
		//////////////////////////////
		/*
				logical (OR) ||

			A       B        A||B
		   ------------------------
		    0       0         0
		    0       1         1
		    1       0         1
		    1       1         1
		*/
		if(a==b || c!=a) // gives false if both false otherwise true..
		{
			printf("OR : True...\n");
		}
		else
		{
			printf("OR : false...\n");
		}

		// NOT 
			// A       !A 
		 //  -------------
		 //    0        1
		 //    1        0

		   if(!(a>b)) // inverse the logic
		   {
		   	printf("NOT True..\n"); // true block
		   }
		   else
		   {
		   	printf("NOT False...\n"); //false block
		   }
	//getch();
}