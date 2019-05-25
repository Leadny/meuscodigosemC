#include<stdio.h>


int main (){

	int cont_par = 0, cont_imp = 0, cont_po = 0, cont_N = 0, num, i = 0;
	for (i = 0; i < 5; i++){
		scanf("%i", &num);
		if (num % 2 == 0){
			cont_par += 1;
		}
		if (num % 2 != 0 || num % 2 == -1){
			cont_imp += 1;
		}
		if (num  > 0){
			cont_po += 1;
		} 
		if (num < 0){
		cont_N += 1;

		}
	
	}
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",cont_par, cont_imp, cont_po, 		cont_N);
	



	return 0;
}

