#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = 0;
    int l = 0, r = strlen(s)-1;
    while(l < r){
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
    printf("%s", s);
    return 0;
}
