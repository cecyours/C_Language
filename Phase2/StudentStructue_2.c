// structude program
#include<stdio.h>

struct Student
{
		int rollno;
		char name[100];
		char subject[100];
		float marks;
};

int main()
{
	struct Student s;

	printf("Enter rollno : ");
	scanf("%d",&s.rollno);
	
	printf("  Enter name : ");
	scanf("%s",s.name);

	printf("Enter subject : ");
	scanf("%s",s.subject);

	printf("Enter marks : ");
	scanf("%f",&s.marks);


	printf("\n------------------------\n");
	printf(" Rollno : %d\n",s.rollno);
	printf("   name : %s\n",s.name);
	printf("subject : %s\n",s.subject);
	printf("  marks : %f\n",s.marks);
}