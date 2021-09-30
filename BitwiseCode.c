
/*

1 bitwise AND (&)
2 bitwise OR  (|)
3 bitwise Ex-OR (^)
4 negation (~)
5 left shift (<<)
6 right shift
*/
#include<stdio.h>
void main(){

		int a = 7,b = 2,c;
	// clrscr();

		// bitwise AND (&) #gives 1 if both are 1 else 0
		/*
					8 4 2 1
				-------------
			7 = >   0 1 1 1
			2 = >   0 0 1 0
			---------------------
			 & =>   0 0 1 0 => 2
		*/
		c = a & b;
		printf("%d & %d = %d\n",a,b,c);

		// bitwise OR (|) # gives 0 if both are zero otherwise 1
		/*
			   8 4 2 1
			  ---------
		   7=> 0 1 1 1
		   2=> 0 0 1 0
		   -------------
		   |=> 0 1 1 1  => 7
		*/

		c = a | b;
		printf("%d | %d = %d\n",a,b,c);

		// bitwise Ex-Or (^) # if both are same then 0 otherwise 1

		/*      8 4 2 1
		   -------------
			7 =>0 1 1 1
			2 =>0 0 1 0
			------------
			^ =>0 1 0 1 => 5
		*/
		c = a ^ b;
		printf("%d ^ %d = %d\n",a,b,c);
		
		// negation (~) # takes only one operand
		/*
			x = -(a+1)
			  = -(-6+1)
			  = -(-5)
			  = 5
		*/
		c = ~a;
		printf("~%d : %d\n",a,c);

		// left shift(<<)
		/*
			a = 7
			b = 2
			c = a*2^b
			  = 7*2^2
			  = 7*4
			  = 28
		*/

		c = a<<b;
		printf("%d << %d = %d \n",a,b,c);

		// right shift (>>)
		/*
			a = 7
			b = 2
			c = a/2^b
			  = 7/2^2
			  = 7/4
			  = 1		
		*/
		c = a >> b;
		printf("%d >> %d = %d\n",a,b,c);

	// getch();
}