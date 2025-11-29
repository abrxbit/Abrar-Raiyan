#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *p=&a,*q=&b;
    printf("%d", *p + *q);
    return 0;
}
