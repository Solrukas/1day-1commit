#include <stdio.h>
 
int main() {
    int num;
    long long int al[91];
    long long int 
    al[0] = 0;
    al[1] = 1;
 
    scanf("%d", &num);
 
    if (num >= 2) {
        for (int i = 2; i <= num; i++) {
            al[i] = al[i - 1] + al[i - 2];
        }
    }
 
    printf("%lld\n", al[num]);
 
}
