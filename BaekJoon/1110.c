#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0, num = 0, sum = 0;
	int a, b, c;
	scanf("%d", &num);
	sum = num;

	while (sum != num || cnt==0) {
		a = sum / 10;
		b = sum % 10;
		c = (a + b) % 10;
		a = b;
		b = c;
		sum = a * 10 + b;
		cnt++;
	}
	printf("%d\n", cnt);
}
