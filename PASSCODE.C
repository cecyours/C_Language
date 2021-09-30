void main()
{
	char pass1[100]="game",pass2[100];
	int i=-1;
clrscr();
	  printf("Enter pass Word : ");

	  do{
		i++;
	      pass2[i] = getch();
	      printf("*");

	  }while(pass2[i]!='\n' && pass2[i]!='\r');
	   pass2[i]='\0';
	  if(!strcmp(pass2,pass1))
	  {
		textattr(2);
		cprintf("\n\n\rdone");
	  }
	  else
	  {
		textattr(4);
		cprintf("\n\n\rgone...");
	  }
getch();
}