#include <stdio.h>
struct Complex{
    int r;
    int i;
};
struct Complex add(struct Complex a, struct Complex b){
    struct Complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}
int main(){
    struct Complex a,b,c;
    scanf("%d %d",&a.r,&a.i);
    scanf("%d %d",&b.r,&b.i);
    c = add(a,b);
    printf("%d %d", c.r, c.i);
    return 0;
}
