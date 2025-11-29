#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char hex[100];
    scanf("%s", hex);
    int len=strlen(hex), dec=0, base=1;
    for(int i=len-1;i>=0;i--){
        char c=hex[i];
        int val;
        if(c>='0' && c<='9') val=c-'0';
        else if(c>='A'&&c<='F') val=c-'A'+10;
        else val=c-'a'+10;
        dec += val*base;
        base*=16;
    }
    printf("%d", dec);
    return 0;
}
