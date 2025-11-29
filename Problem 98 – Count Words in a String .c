#include <stdio.h>
#include <string.h>
int main(){
    char s[300];
    fgets(s, sizeof(s), stdin);
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if((s[i] != ' ' && s[i] != '\n') && (i==0 || s[i-1]==' '))
            count++;
    }
    printf("%d", count);
    return 0;
}
