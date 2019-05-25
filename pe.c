#include<stdio.h>

int main()
{


	int num,posi;
	printf("Digite um numero inteiro\n");
	scanf("%i",&num);

	if (num >= 0){
		do {
			posi = num % 10;
			printf("%i",posi);
			num /= 10;
			
		}while(num != 0);
			printf("\n");
	}



	return 0;	
}
