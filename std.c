#include<stdio.h>

	struct alunos{

	int mat;
	double not1, not2;

	};

int main() 
{
	int n;
	printf("Quantos alunos você quer cadastrar: \n");
	scanf("%i",&n);

	struct alunos aluno[n];
	
	
	
	int vet[n], i;
	for (i = 0; i < n; i++){
		scanf("%i %lf %lf", aluno[i].mat, aluno[i].not1, aluno[i].not2);
	
	}



	return 0;
}
