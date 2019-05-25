#include<stdio.h>


int main(void){

	int matriz[5][5] = {{1, 2, 0, 5, 7},
						{2, 1, 7, 9, 0},
						{3, 2, 6, 8, 1},
						{4, 3, 5, 7, 0},
						{5, 3, 4, 6, 2}};

	for (int i = 0; i < 5; i++){

		for (int j = 0; j < 5; j++){
			if (i == j){
				printf(" ");
			}

		else printf("*");
		}
		printf("\n");
	}


	return 0;
}
