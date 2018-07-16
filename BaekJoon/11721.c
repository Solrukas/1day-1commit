#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char str[100];
	int i = 0, len = 0;

	scanf("%s", str);

	len = strlen(str);
	for (i = 0; i < len; i++) {
		printf("%c", str[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
}
