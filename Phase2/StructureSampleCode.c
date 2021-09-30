// structure , userdefined defined ,its just collection of variables with dif. or  same data type
#include<stdio.h>

struct Student{

	int rollno;
	char name[100];
	char subject[100];
};
void main()
{
	// int a

	struct Student s1 = {23,"Jay","python"},s2={45,"Gk","Java"};

	printf(" rollno : %-7d x\n",s1.rollno);
	printf("   name : %-7s x\n",s1.name);
	printf("subject : %-7s x\n",s1.subject);
	printf("\n\n");
	printf(" rollno : %-7d x\n",s2.rollno);
	printf("   name : %-7s x\n",s2.name);
	printf("subject : %-7s x\n",s2.subject);
}