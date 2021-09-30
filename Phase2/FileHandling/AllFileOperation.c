#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char  data = 'A',ch;
	int j=1;

	fp = fopen("Alphabet.txt","w+");

	for(data='Z';data>='A';data--,j++)
	{
		fprintf(fp, "%c",data);
		if(j%5==0)
		{
			fprintf(fp, "\n");	
		}
	}
	printf("-----------------------\n");
	// 0 for start , 1 for current , 2 for last
	fseek(fp,0,0);
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
}

// -Ve , 0 , +ve