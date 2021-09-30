#include<stdio.h>
	int n,i;

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

void sortCode(struct Student s[])
{
	int j;
	struct Student temp;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].avg < s[j].avg)
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
}
void main()
{
	struct Student s[30];
	
	printf("Enter no of Student : ");
	scanf("%d",&n);

	printf("Enter data : \n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter data for Student %d : \n",i+1);
		printf("Enter rollno  : ");
		scanf("%d",&s[i].rollno);
		
		printf("Enter name  : ");
		scanf("%s",&s[i].name);
		
		printf("Enter marks of maths  : ");
		scanf("%f",&s[i].m.maths);

		printf("Enter marks of science  : ");
		scanf("%f",&s[i].m.sceince);

		printf("Enter marks of GK  : ");
		scanf("%f",&s[i].m.GK);

		s[i].total = s[i].m.maths+s[i].m.sceince+s[i].m.GK;
		s[i].avg = s[i].total/3;
	}

	//
		// merrit the code
		sortCode(s);
	//
	printf("\n------------------------------------------------------------------\n");
	
	printf("%3s | %7s | %6s | %7s | %6s | %6s | %6s  ","rollno","name","Maths","Sceince","Gk","Total","Avg"); //rollno , name,maths,science,Gk,total,avg

	printf("\n------------------------------------------------------------------\n");

	for(i=0;i<n;i++)
	{
	
		printf("   %3d | %7s | %6.2f | %7.2f | %6.2f | %6.2f | %6.2f%%  \n",s[i].rollno,s[i].name,s[i].m.maths,s[i].m.sceince,s[i].m.GK,s[i].total,s[i].avg); //rollno , name,maths,science,Gk,total,avg

	}


}