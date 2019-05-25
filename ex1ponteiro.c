#include<stdio.h>
#include<stdlib.h>

int main(){

	int valor1, valor2;
	int *ponteiro;

	ponteiro = &valor1;
	*ponteiro = 10;
		
	ponteiro = &valor2;
	*ponteiro = 20;
	
	printf("Valor 1 %d\n", valor1);	
	printf("Valor 2 %d\n", valor2);	


	return 0;
}
