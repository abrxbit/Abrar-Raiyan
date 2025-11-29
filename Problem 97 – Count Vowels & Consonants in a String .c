#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200];
    fgets(s, sizeof(s), stdin);
    int v = 0, c = 0;
    for(int i = 0; s[i] != '\0'; i++){
        char ch = tolower(s[i]);
        if(ch >= 'a' && ch <= 'z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}
