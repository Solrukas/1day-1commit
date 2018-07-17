#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;
	scanf("%d", &num);

	while (num--) {
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
}
