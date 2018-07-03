#include <stdio.h>
 
int fibonacci(int n) {
    static int arr[41] = { 0 };
    if (arr[n] > 0) return arr[n];
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return arr[n] = fibonacci(n - 2) + fibonacci(n - 1);
}
 
 
int main() {
    int num, tmp;
    scanf("%d", &num);
 
    for (int i = 0; i < num; ++i) {
        scanf("%d", &tmp);
        if (tmp == 0) printf("1 0\n");
        else printf("%d %d\n", fibonacci(tmp - 1), fibonacci(tmp));
    }
 
    return 0;
}
