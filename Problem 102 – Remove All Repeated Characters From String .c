#include <stdio.h>
#include <string.h>
int main(){
    char s[300], out[300]={0};
    fgets(s, sizeof(s), stdin);
    int used[256]={0}, j=0;
    for(int i=0; s[i]!='\0'; i++){
        unsigned char ch = s[i];
        if(!used[ch] && ch!='\n'){
            out[j++] = ch;
            used[ch] = 1;
        }
    }
    out[j] = '\0';
    printf("%s", out);
    return 0;
}
