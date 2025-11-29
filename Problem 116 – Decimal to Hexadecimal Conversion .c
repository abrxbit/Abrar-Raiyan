#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char hex[100];
    int i=0;
    while(n>0){
        int r=n%16;
        if(r<10) hex[i++]='0'+r;
        else hex[i++]='A'+(r-10);
        n/=16;
    }
    for(int j=i-1;j>=0;j--) printf("%c", hex[j]);
    return 0;
}
