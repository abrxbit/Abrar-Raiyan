#include <stdio.h>

void reverse(int arr[], int start, int end) {
    if(start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse(arr, start + 1, end - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
