#include<stdio.h>


int main(){

	int M, N, i = 0, aux = 0, sum = 0;
	scanf("%d %d",&M, &N);
	if(M > N) {
		aux = M;
		M = N;
		N = aux;
	}
	
	
	if (M > 0 && N > 0){

		for (i = M; i <= N; i++){
			if(i >= M && i <= N){
				sum += i;
				printf("%d ",i);
			}

		}
		printf("Sum=%d\n", sum);
	}

	return 0;
}
