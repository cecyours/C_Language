#include<stdio.h>
int main()
{
	enum day{mon,tue,wed,thu,fri,sat,sun};
	int d;
	// clrscr();

	printf("   monday : %d\n",mon);
	printf("  Tuesday : %d\n",tue);
	printf("Wednesday : %d\n",wed);
	printf(" Thursday : %d\n",thu);
	printf("   Friday : %d\n",fri);
	printf(" Saturday : %d\n",sat);
	printf("   Sunday : %d\n",sun);

	printf("Enter day code : ");
	scanf("%d",&d);
	if(d==mon)
	{
		printf("today is monday..");
	}
	else if(d == tue)
	{
		printf("today is Tuesday..");
	}


	// getch();
}