#include<stdio.h>
#include<stdlib.h>


int main(){
	int x, y, *p, *q;
	p = &x;
	q = &y;

	if (p > q) printf("O endereço de X eh maior:%p\n",p);
	
	else printf("O endereco de Y eh maior:%p\n",q);
	


	return 0;
}
