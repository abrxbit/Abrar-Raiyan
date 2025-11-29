#include <stdio.h>
int main(){
    int n, oct=0, base=1;
    scanf("%d",&n);
    while(n>0){
        oct += (n%8)*base;
        base *= 10;
        n/=8;
    }
    printf("%d", oct);
    return 0;
}
