#include <stdio.h>
#include <ctype.h>
int main(){
    char s[300];
    fgets(s, sizeof(s), stdin);
    int letters=0, digits=0, others=0;
    for(int i = 0; s[i] != '\0'; i++){
        if(isalpha(s[i])) letters++;
        else if(isdigit(s[i])) digits++;
        else if(s[i] != '\n') others++;
    }
    printf("Letters = %d\nDigits = %d\nOthers = %d", letters, digits, others);
    return 0;
}
