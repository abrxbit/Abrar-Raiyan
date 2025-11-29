#include <stdio.h>
int main(){
    int n, bin=0, base=1;
    scanf("%d",&n);
    while(n>0){
        bin += (n%2)*base;
        base*=2;
        n/=2;
    }
    printf("%d", bin);
    return 0;
}
