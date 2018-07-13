#include <stdio.h>
#pragma warning(disable:4996)

int main(){
	int d1, d2, i, day = 0;
	char mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	scanf("%d %d", &d1, &d2);

	for (i = 1; i < d1; i++) {
		day += mon[i - 1];
	}
	day += d2;

	switch (day % 7)
	{
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}
}
