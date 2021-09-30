// assignment
#include<stdio.h>
/*
	1	: +
	2	: -
	3	: *
	4	: /
	5	: %
	6	: &
	7	: |
	8	: ^
	9	: ~
	10  : <<
	11  : >>
	12  : =
*/
void main()
{
	int a=7,b=3;
	// clrscr();

		a+=b; // a = a+b
		printf("After += %d\n",a );

		a-=b; // a = a-b
		printf("after -= %d\n",a);

		a*=b; //a = a*b
		printf("after *= %d\n",a);

		a/=b; //a = a/b
		printf("after /= %d\n",a);

		a%=b; //a = a%b
		printf("after %= %d\n",a);

		a&=b; //a = a&b
		printf("after &= %d\n",a);

		a|=b //a = a|b
		printf("after |= %d\n",a);

		a^=b //a = a^b
		printf("after ^= %d\n",a);

		a~=b //a = a~b
		printf("after ~= %d\n",a);

		a<<=b //a = a<<b
		printf("after <<=b %d\n",a);

		a>>=b //a >>b
		printf("after >>=b %d\n",a);

		a==b //a ==b
		printf("after ==b %d\n",a);
	// getch();
}