
#include<stdio.h>
struct Number{ 
	int n:6;
// dataTYpe a:b
};
/**
	x = b-1 , 5

    16 8 4  2  1
    ---------------   
 	1  1 1  1  1  => 31
*/
int main()
{
	struct Number code;
	code.n = 20;

	printf("Data : %d\n",code.n);
}