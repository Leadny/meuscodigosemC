#include<stdio.h>

int main(void){
	long long x;
	unsigned long long y;
	int d;

	scanf("%llu %llu %d",&x);
	printf("%lld\n%8llu\n%08llu\n%*llu\n%0*llu\n",x, y, y, d, y, d, y);



	return 0;
}	
