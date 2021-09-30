
#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	char file1[100],file2[100];
	char ch;
	printf("Enter file 1 : ");
	scanf("%s",file1);

	printf("Enter file 2 : ");
	scanf("%s",file2);

	fp1 = fopen(file1,"r");
	fp2 = fopen(file2,"w");

	while((ch=getc(fp1))!=EOF)
	{
		// putc(ch,fp2);
		fprintf(fp2, "%c",ch);
	}

	fclose(fp1);
	fclose(fp2);

}