#include <stdio.h>
int main(){
    char s[300], out[300];
    fgets(s, sizeof(s), stdin);
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] != ' ' && s[i] != '\n')
            out[j++] = s[i];
    out[j] = '\0';
    printf("%s", out);
    return 0;
}
