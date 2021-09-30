



						// 		Line 1;
						// 		Line 2;
						// me:
						// 		Line 3;
						// 		Line 4;
						// 		Line 5;
						// 		Line 6;
						// 		Line 7;
						// 	goto me ; 
						// 		Line 8;
						// 		Line 9;
						// 		Line 10;

#include<stdio.h>
void main()
{
	int i = 0;
			printf("line 1\n");
			printf("line 2\n");
			printf("line 3\n");
		me:
			printf("\t\tline 4 , i = %d\n",i);
			printf("line 5\n");
			printf("line 6\n");
			printf("line 7\n");
			printf("line 8\n");
		i++;
		if (i<=10)
		{
			goto me;
		}
			printf("line 9\n");
			printf("line 10\n");
}