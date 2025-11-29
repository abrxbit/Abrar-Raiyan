#include <stdio.h>

long long power(int base, int exp) {
    if(exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int b, e;
    scanf("%d %d", &b, &e);

    printf("%lld\n", power(b, e));
    return 0;
}
