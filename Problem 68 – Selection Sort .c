#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[min]) min = j;

        int t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
