#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int mainDiag = 0, secDiag = 0;

    for(int i = 0; i < n; i++) {
        mainDiag += a[i][i];
        secDiag += a[i][n - i - 1];
    }

    printf("Main Diagonal Sum = %d\n", mainDiag);
    printf("Secondary Diagonal Sum = %d\n", secDiag);

    return 0;
}
