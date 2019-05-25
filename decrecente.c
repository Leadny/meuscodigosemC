#include<stdio.h>


int main(){

	int N, i = 0, n1, n2, res;
	
	while (i < N){
		scanf("%i %i",&n1,&n2);
		if (n1 > n2){
			res = (n1 / n2);
			printf("%i",res);

		} else if (n2 == 0){
			printf("divisao impossivel");
			
		
		}
	i++;
	}

	return 0;
}

