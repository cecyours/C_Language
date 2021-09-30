#include<stdio.h>
int main()
{
	int a[100];
	int n,i,num,f=0;
	//clrscr();
		printf("Enter size : ");
		scanf("%d",&n);

		printf("------Enter elements : \n");
		for(i=0;i<n;i++)
		{
			printf(" a[ %d ]  = ",i);
			scanf("%d",&a[i]);
		}

		printf("Enter data(number) to search : ");
		scanf("%d",&num);

		for(i=0;i<n;i++)
		{
			printf("iteration : %d\n",i);

			if(a[i]==num)
			{
				f = 1;
				break;
			}
		}

		if (f==1)
		{
			printf("data %d FOUND at %d index.\n",num,i);
		}
		else
		{
			printf("data %d not FOUND..\n",num);
		}
	// getch();
}