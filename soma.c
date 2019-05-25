#include<stdio.h>


int main(){
	int N, X, Y, i=0, aux = 0, cont = 0, j;
	scanf("%d",&N);
	for (i=0; i<N; i++){
		scanf("%d %d", &X, &Y);

		if (Y < X){
			aux = Y;
			Y = X;
			X = aux;
		}
		for (j = X+1 ; j < Y; j++){
			if(j % 2 != 0){
				cont += j;
				
			}
			
		}
		printf("%d\n",cont);
		cont = 0;
	}


	return 0;
}
