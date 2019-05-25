#include<stdio.h>
#include<stdlib.h>


int main(){

	int x, *p1;
	float y , *p2;
	char z, *p3;

	p1 = &x;
	p2 = &y;
	p3 = &z;

    x = 7;
	y = 9.3;
	z = 'e';
	printf("\nValor x: %d, valor y: %f, valor z: %c\n", x, y, z);
	
	*p1 = 10;
	*p2 = 30.4;
	*p3 = '2';
	
	printf("\nValor x: %d, valor y: %f, valor z: %c\n", x, y, z);

	return 0;
}
