#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, a, b, i, count = 0, arr[10000] = { 0, };
	scanf("%d %d", &num, &a);

	for (i = 0; i < num; i++) {
		scanf("%d", &b);
		if (b < a) {
			arr[count] = b;
			count++;
		}
	}
	for (i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
}
