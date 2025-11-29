#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n], newArr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int j = 0;
    for(int i = 0; i < n; i++)
        if(i == 0 || arr[i] != arr[i - 1])
            newArr[j++] = arr[i];

    for(int i = 0; i < j; i++)
        printf("%d ", newArr[i]);

    return 0;
}
