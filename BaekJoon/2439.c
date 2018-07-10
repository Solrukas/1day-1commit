#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num,j,k;
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (j = 0; j < num - i - 1; j++) {
			printf(" ");
		}
		for (k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
