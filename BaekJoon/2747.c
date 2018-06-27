#include <stdio.h>

int num;

int mfunc(void){
	if(num==0){
		return 0;
	}
	if(num==1){
		return 1;
	}
	int zero = 0, one = 1, sum;
	for(int i=0; i<num-1; i++){
		sum = zero + one ;
		zero = one;
		one = sum;
	}
	return sum;
}

int main(void){
	int a;
	scanf("%d",&num);
	if(num < 0 || num > 45){
		return 0;
	}
	a=mfunc();
	printf("%d",a);
}
