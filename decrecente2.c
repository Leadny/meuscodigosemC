#include<stdio.h>


int main(){
	
	int N, fat=1;
	scanf("%i",&N);
	for ( ; N >=1; N--){
	fat = fat*(N-1);
	

	}
		printf("%i\n",fat);

	return 0;
}
