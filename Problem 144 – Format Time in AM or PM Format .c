#include <stdio.h>
int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    char *p = (h>=12) ? "PM" : "AM";
    if(h>12) h-=12;
    if(h==0) h=12;
    printf("%02d:%02d:%02d %s", h,m,s,p);
    return 0;
}
