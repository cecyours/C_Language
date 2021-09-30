

#include<stdio.h>
#include<stdlib.h>
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
		printf("First node...\n");
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
}

int main()
{
	insert();
	insert();
	insert();

}