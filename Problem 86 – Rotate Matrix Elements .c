#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int temp = a[0][0];

    for(int i = 0; i < c - 1; i++) a[0][i] = a[0][i + 1];
    for(int i = 0; i < r - 1; i++) a[i][c - 1] = a[i + 1][c - 1];
    for(int i = c - 1; i > 0; i--) a[r - 1][i] = a[r - 1][i - 1];
    for(int i = r - 1; i > 1; i--) a[i][0] = a[i - 1][0];

    a[1][0] = temp;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
