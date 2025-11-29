#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200];
    fgets(s, sizeof(s), stdin);
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }
    printf("%s", s);
    return 0;
}
