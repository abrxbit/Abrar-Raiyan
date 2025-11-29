#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            if(a[i][j] != b[i][j]) {
                printf("Not Equal\n");
                return 0;
            }

    printf("Equal\n");
    return 0;
}
