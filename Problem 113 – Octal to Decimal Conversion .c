#include <stdio.h>
#include <math.h>
int main(){
    int oct, dec=0, base=1, rem;
    scanf("%d",&oct);
    while(oct>0){
        rem = oct%10;
        dec += rem*base;
        base *= 8;
        oct /= 10;
    }
    printf("%d", dec);
    return 0;
}
