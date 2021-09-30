// jay code
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	 char str1[100];
	 char str2[100];
	 char *p,n;
clrscr();
	   printf("Enter the string : ");
	  // scanf("%s",str1);
	    gets(str1);
	   printf("Data : %s\n",str1);

	   strcpy(str2,str1); //invalid str2 = str1;
	   //str1[0] = '\0';
	   printf("str1 : %s \t str2 : %s\n",str1,str2);

	   strupr(str1);
	   printf("str1 : %s\n",str1);

	   strlwr(str2);
	   printf("str2 : %s\n",str2);

	   strcat(str1,str2); // str1 = str1+str2
	   printf("str1 : %s\n",str1);

	   p = strchr(str1,'h');
	   printf("\n\nAddress of 'h' is \" %u \" \n",p);// hello 'jay' ,hello "jay"
	   if(p)
	   {
	      printf("'h' is found \"%p\" \n",p);
	   }
	   else
	   {
	      printf("'h' is not found..\n",p);
	   }
	   printf("\n\n");

	   p = strstr(str1,"pro");
	   printf("Address of \"pro\" is %u\n",p);
	   if(p)
	   {
		printf("\"pro\" is found at %p\n",p);
	   }
	   else
	   {
		printf("\"pro\" is not found ...\n");
	   }

	   strrev(str2);
	   printf("\n\nreverse str2 : %s\n",str2);

	   strset(str2,'x');
	   printf("strset : %s.\n",str2);

	   n = strcmp("ABC","ABD");
	   printf("status of n is %d\n",n);
getch();
}