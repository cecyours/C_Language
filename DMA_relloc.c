
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i,n,m; //n regular size , m extra size

	char ch;
	printf("Enter size : ");
	scanf("%d",&n);

	p = (int *)malloc(n*sizeof(int));
	printf("Enter collection : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter data  : ");
		scanf("%d",p+i);
	}

	printf("--------------------------: \n");
	for(i=0;i<n;i++)
	{
		printf(" \t\t data  %d : %d\n",i,*(p+i));
		 
	}
	start:
	getchar();
 
	printf("Do you want to extend the size [y/n]: ");
	scanf("%c",&ch);

	if(ch=='n' || ch=='N')
	{
		printf("Programe will ternimate itself...");
		exit(0);
	}

	printf("\nEnter extra size : ");
	scanf("%d",&m);

	 p = realloc(p,m+n);

	 for(i=n;i<(n+m);i++)
	 {
		 printf("Enter data  : ");
		scanf("%d",p+i);
	}

	printf("--------------------------: \n");
	for(i=0;i<n+m;i++)
	{
		printf(" \t data  %d : %d\n",i,*(p+i));
		 
	}

	n = n +m;
	goto start;
}
