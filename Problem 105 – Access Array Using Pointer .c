#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int *p = a;
    for(int i=0;i<n;i++) printf("%d ", *(p+i));
    return 0;
}
