#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *p=&a, *q=&b;
    int t=*p;
    *p=*q;
    *q=t;
    printf("%d %d", a, b);
    return 0;
}
