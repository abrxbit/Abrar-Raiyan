#include <stdio.h>
#include <math.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    double normal = 0;
    int trace = 0;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            normal += a[i][j] * a[i][j];
            if(i == j) trace += a[i][j];
        }

    printf("Normal = %.2lf\n", sqrt(normal));
    printf("Trace = %d\n", trace);

    return 0;
}
