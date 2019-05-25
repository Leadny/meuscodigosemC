#include<stdio.h>

int main(){

	int idade;
	float media, sum_age = 0.0, qtd_age = 0.0;
	scanf("%d", &idade);
	while (idade > 0){
		sum_age += idade;
		qtd_age += 1;
		scanf("%d", &idade);

	} 
	media = sum_age / qtd_age;
	printf("%.2f\n",media);

	return 0;
}
