#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int num,i;

	double score[1000] = {0, };
	double max = 0;
	double sum = 0.0;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 0; i < num; i++) {
		if (score[i] > max) {
			max = score[i];
		}
	}
	for (i = 0; i < num; i++) {
		sum += (score[i] / max) * 100.0;
	}
	printf("%0.2lf", sum / num);
}
