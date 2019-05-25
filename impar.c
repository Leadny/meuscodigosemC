#include<stdio.h>

int main(){

	int X,Y,contimp = 0, aux = 0, i;
	scanf("%i %i",&X,&Y);
	if (Y < X){
		aux = Y;
		Y = X;
		X = aux;
	}
	
	for(i=X+1; i < Y; i++){
	
		if (i % 2 != 0){
			contimp += i;
		}
		
	}
	printf("%d\n",contimp);


	return 0;
}
