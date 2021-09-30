
#include<stdio.h>
struct student_record{

	char name[100];
	int rollno;
	char branch[100];
};
int main()
{

	struct student_record s[10];
	int n,i;
	printf("Enter no of students : ");
	scanf("%d",&n);

	printf("Enter data : \n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter data for Student %d\n",i+1);
		printf("Enter name : ");
		scanf("%s",&s[i].name);

		printf("Enetr rollno : ");
		scanf("%d",&s[i].rollno);

		printf("Enter branch : ");
		scanf("%s",&s[i].branch);
	}
	printf("\n-------------------------------------------\n");
	printf("%10s | %6s | %-10s\n","Name","RollNo","branch");
	printf("-------------------------------------------\n");

	for(i=0;i<n;i++)
	{

		printf("%10s | %6d | %-10s\n",s[i].name,s[i].rollno,s[i].branch);

	}	
}