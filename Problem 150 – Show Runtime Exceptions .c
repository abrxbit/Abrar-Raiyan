#include <stdio.h>
int main(){
    int a=5, b=0;
    printf("Before exception\n");
    int x = a / b;
    printf("%d", x);
    return 0;
}
