#include<stdio.h>


int main ()
	{
	int fat, i=1;
	
	
	scanf("%i",&fat);

	for (; fat >= 1; fat = fat-1){
		i = i * fat;
	} 
	printf("%i\n",i);

	return 0;
	}
