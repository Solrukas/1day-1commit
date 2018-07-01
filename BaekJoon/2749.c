#include <stdio.h>

int main(){
	long long num, st = 0, nd = 1, rd = st + nd;
	scanf("%lld", &num);
	for(num = num % (1500000); num --> 1; st = nd % 1000000, nd = rd % 1000000)
		rd = (st + nd) % 1000000;
	printf("%lld",rd);
}
