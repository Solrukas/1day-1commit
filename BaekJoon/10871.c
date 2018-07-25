#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, a, b, i, cnt = 0, arr[10000] = { 0, };
	scanf("%d %d", &num, &a);

	for (i = 0; i < num; i++) {
		scanf("%d", &b);
		if (b < a) {
			arr[cnt] = b;
			cnt++;
		}
	}
	for (i = 0; i < cnt; i++) {
		printf("%d ", arr[i]);
	}
}
