#include<stdio.h>
#include<stdlib.h>

int main(){

	float v[3], *pv, i;
	pv = v;
	for(i = 0; i < 3; i++){
		printf("%p\n",pv+1);
	}

	return 0;
}
