#include <stdio.h>
struct Dist{
    int f;
    int i;
};
int main(){
    int n;
    scanf("%d",&n);
    struct Dist d[n];
    int fsum=0, isum=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&d[i].f,&d[i].i);
        fsum += d[i].f;
        isum += d[i].i;
    }
    fsum += isum/12;
    isum %= 12;
    printf("%d %d", fsum, isum);
    return 0;
}
