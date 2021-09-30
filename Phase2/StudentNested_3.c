#include<stdio.h>
struct Student{
	int rollno;
	char name[100];
	struct marks{
		float maths;
		float sceince;
		float GK;
	}m;
	float total,avg;

}; 

void main()
{
	struct Student s;
	
	printf("Enter rollno  : ");
	scanf("%d",&s.rollno);
	
	printf("Enter name  : ");
	scanf("%s",&s.name);
	
	printf("Enter marks of maths  : ");
	scanf("%f",&s.m.maths);

	printf("Enter marks of scitnce  : ");
	scanf("%f",&s.m.sceince);

	printf("Enter marks of GK  : ");
	scanf("%f",&s.m.GK);

	s.total = s.m.maths+s.m.sceince+s.m.GK;
	s.avg = s.total/3;

	printf("\n-----------------------------------\n");
	printf(" rollno : %d   \n ",s.rollno);
	printf("   name : %s   \n ",s.name);
	printf("  maths : %3.2f\n ",s.m.maths);
	printf("sceince : %3.2f\n ",s.m.sceince);
	printf("     GK : %3.2f\n ",s.m.GK);
	printf("  total : %3.2f\n ",s.total);
	printf("    avg : %3.2f\n ",s.avg);


}