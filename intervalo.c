#include<stdio.h>


int main(){


	int N,i = 0, num, cont1 = 0, cont2 = 0;
		scanf("%d",&N);
		for(i = 0; i < N; i++){
			scanf("%d",&num);
			if (num >= 10 && num <= 20) {
				cont1 += 1;
			}else {
				cont2 +=1;
			}
		}

		printf("%d in\n",cont1);
		printf("%d out\n",cont2);






	return 0;
}
