#include <stdio.h>
int main(){
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    printf("%02d-%02d-%04d\n", d,m,y);
    printf("%02d/%02d/%04d\n", d,m,y);
    printf("%04d/%02d/%02d\n", y,m,d);
    return 0;
}
