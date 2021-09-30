
#include<stdio.h>
union Student
{
		int rollno;
		char div;
};
int main()
{
	union Student s;

    printf("Enter div : ");
	scanf("%c",&s.div);
	printf("Div : %c\n",s.div);
	
	
	printf("Enter rollno : ");
	scanf("%d",&s.rollno);	
	printf("\n\n rollno %d\n",s.rollno); 

	// printf("%d\n",sizeof(float)); // char : 1,int : 2,float : 4	
}