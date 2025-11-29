#include <stdio.h>
#include <string.h>
int main(){
    char s[300];
    fgets(s, sizeof(s), stdin);
    int freq[256]={0};
    for(int i=0; s[i]!='\0'; i++){
        unsigned char ch = s[i];
        if(ch!='\n') freq[ch]++;
    }
    for(int i=0; i<256; i++)
        if(freq[i] > 0)
            printf("%c = %d\n", i, freq[i]);
    return 0;
}
