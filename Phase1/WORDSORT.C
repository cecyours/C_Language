#include<conio.h>
#include<stdio.h>
void main()
{
	char words[50][30],temp[30];
	int i,n,j;
clrscr();
	   printf("Enter no of Words : ");
	   scanf("%d",&n);

	   printf("Enter those words : \n");
	   for(i=0;i<n;i++)
	   {
		printf("Enter word : ");
		scanf("%s",words[i]);
	   }
	   //////////////
		//logic to sort
		     for(i=0;i<n;i++)
		     {
				for(j=i+1;j<n;j++)
				{
					if(strcmp(words[i],words[j]) > 0)
					{
						strcpy(temp,words[i]);
						strcpy(words[i],words[j]);
						strcpy(words[j],temp);
					}
				}
		     }
	   //////////////
	   printf("\n\n\n");
	   for(i=0;i<n;i++)
	   {
		printf("word : %s\n",words[i]);
	   }

getch();
}