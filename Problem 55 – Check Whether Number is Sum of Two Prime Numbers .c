#include <stdio.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n/2; i++) {
        if(isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            return 0;
        }
    }

    printf("Cannot be expressed as sum of two primes\n");
    return 0;
}
