#include <stdio.h>

int st, nd;

int fibonacci(int n) {
    if (n == 0) {
        st++;
        return 0;
    } else if (n == 1) {
        nd++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
	int num;
	scanf("%d",&num);
	
	for(int i=0;i<num;i++) {
		st=0; nd=0;
		int tmp;
		
		scanf("%d",&tmp);
		fibonacci(tmp);
		printf("%d %d\n",st,nd);
	}
	return 0;
}

//시간 초과 현상이 일어남
