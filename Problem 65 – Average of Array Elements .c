#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    double sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%.2lf\n", sum / n);
    return 0;
}
