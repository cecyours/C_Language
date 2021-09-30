
#include<stdio.h>
/*
	prototype : 

	returnType Name(args...)
	{
		//code
	}
*/
void say(int n,int c)
{

	printf("Data : %d\n", n);
}

void wish(char name[])
{
	printf("welcome %s\n",name);
}

void  main()
{
	say(10,4); //calling
	say(34,5); //calling
	say(54,7); //calling

	wish("jay"); // call wish function
	wish("Gk"); // call wish function

}