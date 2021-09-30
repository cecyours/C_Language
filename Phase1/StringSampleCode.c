
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];

	printf("Enter string : ");
	scanf("%s",str);
	printf("str : %s\n",str);

	strupr(str);
	printf("string in uppercase : %s\n",str);
}