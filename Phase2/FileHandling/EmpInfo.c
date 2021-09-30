
#include<stdlib.h>
#include<stdio.h>
FILE *fp;
char fileName[100] = "EmployeeCode.txt";
struct Employee{

	int emp_id;
	char name[100];
	int salary;
}emp;

void getData()
{
	printf("Enter emp_id : ");
	scanf("%d",&emp.emp_id);

	printf("Enter name : ");
	scanf("%s",emp.name);
	 

	printf("Enter salary : ");
	scanf("%d",&emp.salary);

	 
	// printf("Enter fileName : ");
	// scanf("%s",fileName);
	// printf("0----------");
}

void storeInFile()
{
	getData();
	fp = fopen(fileName,"a");

	fprintf(fp, "%4d | %10s | %d\n",emp.emp_id,emp.name,emp.salary);

	fclose(fp);
}

void displayFileContent()
{
	fp = fopen(fileName,"r");
	char ch;

	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);

}

void main()
{

	int choice;
 
 	printf("  Enter 1 for store data : \n");
 	printf("Enter 2 for display data : \n");
 	printf("        Enter 3 for exit : \n");

 	do
 	{
 		printf("\nEnter choice : ");
 		scanf("%d",&choice);

 		switch(choice)
 		{
 			case 1: storeInFile();break;
 			case 2: displayFileContent();break;
 			case 3: exit(0);break;
 		   default: printf("Invalid choice..");
 		}
 	}while(choice!=3);
}
