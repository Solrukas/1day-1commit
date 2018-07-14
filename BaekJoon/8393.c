#include <stdio.h>
#pragma warning(disable:4996)

int main(){
	int i, num, sum = 0;
	scanf("%d", &num);

	for (i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d", sum);
}
