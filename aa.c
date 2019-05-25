#include<stdio.h>

int main(){

	double A,B,C, maior = 0,i, j, k;
	scanf("%lf %lf %lf",&A,&B,&C);
	if (B > A && B > C){
	maior = B;		
	B = A;
	A = maior;
	}else if (C > A && C > B){
		maior = C;
		C = A;
		A = maior;
	}
	
	i = A*A;
	j = B*B;
	k = C*C;	
	
	if (A >= B+C){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
		if(i == j + k){
			printf("TRIANGULO RETANGULO\n");
		}
	
		if(i > j + k){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if (i < j + k){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if (A == B && A == C && B == C){
			printf("TRIANGULO EQUILATERO\n");

		}else{
			if (A == B || A == C || B == C ){
		 		printf("TRIANGULO ISOSCELES\n");
			}
		}
	}

	
	return 0;
}
