#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0, num = 0;
	scanf("%d", &cnt);

	while (cnt--) {
		scanf("%d", &num);
		int score[1000];
		int sum = 0;
		double avg = .0;
		for (int i = 0; i < num; i++) {
			scanf("%d", &score[i]);
			sum += score[i];
		}
		avg = (double)sum / num;
		int count = 0;
		for (int i = 0; i < num; i++) {
			if (avg < score[i]) {
				count++;
			}
		}
		printf("%.3f%%\n", (double)count * 100 / num);
	}
}
