#include <stdio.h>
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int a[n1], b[n2], c[n1 + n2];

    for(int i = 0; i < n1; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int k = 0;
    for(int i = 0; i < n1; i++) c[k++] = a[i];
    for(int i = 0; i < n2; i++) c[k++] = b[i];

    for(int i = 0; i < k; i++) printf("%d ", c[i]);
    return 0;
}
