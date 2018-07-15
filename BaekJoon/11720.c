#include <stdio.h>
#pragma warning(disable:4996)

int main(){
	int i, num, sum = 0;
	char str[100] = { 0, };
	scanf("%d", &num);
	scanf("%s", str);

	for (i = 0; i < num; i++) {
		sum += (str[i] - '0');
	}
	printf("%d", sum);
}
