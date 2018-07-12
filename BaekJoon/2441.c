#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num,i,j,k;
	scanf("%d", &num);
	
	for (i = num; i > 0; i--) {
		for (k = num; k > i; k--) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
