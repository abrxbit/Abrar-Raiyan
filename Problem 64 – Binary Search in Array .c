#include <stdio.h>
int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int l = 0, r = n - 1;

    while(l <= r) {
        int mid = (l + r) / 2;

        if(arr[mid] == key) {
            printf("Found\n");
            return 0;
        }
        else if(arr[mid] < key)
            l = mid + 1;
        else
            r = mid - 1;
    }

    printf("Not Found\n");
    return 0;
}
