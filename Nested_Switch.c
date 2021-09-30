

#include<stdio.h>
int main()
{
	int rollno;
	char div;

	printf("Enter your info [div-rollno] : ");
	scanf("%c-%d",&div,&rollno);

	switch(div){

		case 'A':
					switch(rollno){
							case 1 ... 10: printf("THor\n");break;
							case 11 ... 20: printf("Ironman\n");break;
							case 21 ... 60:printf("thanos\n");break;
							default : printf("Avengers.");
					}break;
		
		case 'B':
					switch(rollno){
						case 1 ... 10 : printf("Loki\n");break;
						case 11 ... 40: printf("Captain marvel");break;
						case 41 ... 60 : printf("HUlk");break;
						default : printf("Avengers.");
					}break;
		
		case 'C':
					switch(rollno)
					{
						case 1 ... 10: printf("War machine\n");break;
						case 11 ... 30: printf("black panthor\n");break;
						case 31 ... 60: printf("Wanda vision");break;
						default : printf("Avengers.");
					}

	}
}