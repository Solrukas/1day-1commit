#include <stdio.h>
 
int main() {
    int num;
    long long int al[91];
    al[0] = 0;
    al[1] = 1;
 
    scanf("%d", &num);
 
    if (num >= 2) {
        for (int a = 2; a <= num; a++) {
            al[a] = al[a - 1] + al[a - 2];
        }
    }
 
    printf("%lld\n", al[num]);
 
}
