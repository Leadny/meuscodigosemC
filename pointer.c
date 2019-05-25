#include<stdio.h>
#include<stdlib.h>




int main(){
	int x;
	float y;
	char z;
	
	int *p;
	float *p1;
	char *p2;
	
	p = &x;
	p1 = &y;
	p2 = &z;

	x = 3;
	y = 10.12;
	z = 'c';
	printf("Valor x:%d y:%.2f z:%c\n",x,y,z);

	
	
	*p  = 12;
	*p1 = 15.12;
	*p2 = 'W';

	printf("\nNovo vavlor de x:%d y:%f z:%c\n",*p, *p1, *p2);


	return 0;
}
