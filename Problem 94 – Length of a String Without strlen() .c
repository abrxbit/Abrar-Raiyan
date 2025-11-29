#include <stdio.h>
int main(){
    char s[200];
    fgets(s, sizeof(s), stdin);
    int c = 0;
    while(s[c] != '\0' && s[c] != '\n') c++;
    printf("%d", c);
    return 0;
}
