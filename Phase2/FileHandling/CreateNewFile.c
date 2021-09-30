
#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	char ch;
	char name[100];

	fp = fopen("MyFile.txt","a");// fopen(FileName,Mode);

	printf("Enter your Name : ");
	scanf("%s",name);
	fprintf(fp,"%10s : ",name);
	printf("Enter expression : ");
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
		case '+':fprintf(fp, "%2d + %2d = %2d\n",a,b,a+b);break;
		case '-':fprintf(fp, "%2d - %2d = %2d\n",a,b,a-b);break;
		case '*':fprintf(fp, "%2d * %2d = %2d\n",a,b,a*b);break;
		case '/':fprintf(fp, "%2d / %2d = %2d\n",a,b,a/b);break;
		case '%':fprintf(fp, "%2d %% %2d = %2d\n",a,b,a%b);break;

	}

	fclose(fp);
}