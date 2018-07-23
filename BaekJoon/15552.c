#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;
	scanf("%d", &num);

	while (num--) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
}
