
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;

	char ch;
	char data[100];
	fp = fopen("MyFile.txt","r"); //reading file

	if(fp==NULL)
	{
		printf("Bye...\n");
		exit(0);
	} 

	// fscanf(fp,"%s",data); // read the word
	// printf("Data in file : %s\n",data);
	// printf("\n------------\n");
	// fgets(data,100,fp); // read the Line
	
	while((ch = getc(fp))!=EOF)
	{
		printf("%c",ch);
	} 	
}