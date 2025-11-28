#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    int num = total;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            printf("%d ", num--);
        printf("\n");
    }
    return 0;
}
