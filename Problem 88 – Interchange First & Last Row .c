#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int j = 0; j < c; j++) {
        int t = a[0][j];
        a[0][j] = a[r-1][j];
        a[r-1][j] = t;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
