#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c - 1; j++)
            for(int k = j + 1; k < c; k++)
                if(a[i][k] < a[i][j]) {
                    int t = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = t;
                }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
