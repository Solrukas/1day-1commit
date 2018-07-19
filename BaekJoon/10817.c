#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n1, n2, n3, i;
	scanf("%d %d %d", &n1,&n2,&n3);

	if (n1<1 || n2<1 || n3<1 || n1>100 || n2>100 || n3>100)
		return -1;
	if (n1 >= n2 && n1 >= n3) {
		if (n2 >= n3)
			printf("%d", n2);
		else
			printf("%d", n3);
	}
	else if (n2 >= n1 && n2 >= n3) {
		if (n1 >= n3)
			printf("%d", n1);
		else
			printf("%d", n3);
	}
	else {
		if (n2 >= n1)
			printf("%d", n2);
		else
			printf("%d", n1);
	}
}
