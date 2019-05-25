#include<stdio.h>
#define max 5 


int main (){

	float notas[max], media = 0.0;
	for(int i = 0; i < max; i++){
		scanf("%f",&notas[i]);
		media = media + notas[i];
	}
	media = media / max;

	for(int i = 0; i < max; i++){
		if (notas[i] > media)
			printf("%.1f\n",notas[i]);
	}


	return 0;
}
