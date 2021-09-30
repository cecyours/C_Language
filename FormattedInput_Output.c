

#include<stdio.h>
// #include<conio.h>
void main()
{
		int i;
		char name[10];
		char str1[] = "H";
		char str2[] = "Bye";


	// clrscr();

		//scanf()

		printf("Enter number : ");
		scanf("%d",&i);

		printf("Enter name : ");
		scanf("%s",name);

		printf("number - %d\t name - %s\n",i,name);
		
		printf("-------------------------\n");
		printf("Enter number and name : ");
		scanf("%d,%s",&i,name);
		printf("number - %d\t name - %s\n",i,name);

		// printf();

	 	printf("%-3d x\n",23);
	 	printf("%3d x\n",136);

	 	printf("%-7s x\n",str1);
	 	printf("%-7s x\n",str2);


	// getch();
}