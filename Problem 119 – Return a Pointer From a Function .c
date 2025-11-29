#include <stdio.h>
int* get(){
    static int x=50;
    return &x;
}
int main(){
    int *p = get();
    printf("%d", *p);
    return 0;
}
