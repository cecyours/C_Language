// + - 0 - + -1- + --- +
// | 100 | 200 | 399 |
// + --- + --- + --- +


#include<stdio.h>
#include<stdlib.h>
int i = 0;
struct Node{

	int data;
	struct Node *next;

}*head = NULL;

void insert()
{
	struct Node *newNode,*temp;
	int n;

	printf("Enter data : ");
	scanf("%d",&n);

	newNode = (struct Node *)calloc(1,sizeof(struct Node));
	newNode->data = n;
	newNode->next = NULL;

	if(head==NULL)
	{
		head = newNode;
		 
	}
	else
	{

		temp = head;
		while(temp->next !=NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	i++;
}

void display()
{
	struct Node *temp;
	int j;
	if(head==NULL)
	{
		printf("No data to display\n");
	}
	else
	{
		temp = head;

		printf("+");
		for(j=0;j<i;j++)
		{
			printf(" --%2d -- +",j);
		}
		printf("\n");
		printf("|");
		while(temp != NULL)
		{
			// printf("Data : %d\n",temp->data);
			printf(" %-7d |",temp->data);

			temp = temp->next;
		}
		printf("\n");
		printf("+");
		for(j=0;j<i;j++)
		{
			printf(" %7s +","-------");
		}
		printf("\n");
		 
	}
}

void delete(int index)
{
	struct Node *temp;
	int j=0;
	if(index >= i)
	{
		printf("Invalid index ..");
		return;
	}

	temp = head;

	while(temp!=NULL)
	{
		if(j==index)
		{
			temp->next = temp->next->next;
			i--;
		}
		j++;
		temp = temp->next;
	}


}
int main()
{
	int choice;
	int index;
 
	   printf("\n\n Enter 1 for insert : \n");
		printf("Enter 2 for display : \n");
		printf("   Enter 3 for delete : \n");
		printf("     Enter 4 for exit : ");
	do{
		printf(" \n\n Enter the choice : ");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: ;break;
			case 2: display();break;
			case 3:
					printf("Enter index to delete : ");
					scanf("%d",&index);
					delete(index);break;
			case 4: exit(0);break;
		}

	}while(choice!=4);

}