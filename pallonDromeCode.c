
#include<stdio.h>
int main()
{
	int num,reverse = 0,rem,temp;


	printf("Enter the number : ");
	scanf("%d",&num);

	temp = num;
	while(num>0)
	{
		rem = num % 10;
		reverse = reverse*10+rem;
		num = num/10;
	}

	printf("   reverse number : %d\n",reverse);
	
	if(temp == reverse)
	{
		printf("%d is pallondrome number\n",temp);
	}
	else
	{
		printf("%d is not pallondrome number\n",temp);

	}

}

/*
	rem(=num%10)           reverse(=reverse*10 + rem)       num(= num/10) : 743
	3                      3                                74
	4                      34                               7
	7                      347                              0

	  input : 743
	reverse : 347


*/