#include <stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
