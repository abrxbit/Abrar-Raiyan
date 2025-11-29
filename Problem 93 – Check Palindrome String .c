#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s,"\n")] = 0;
    int l = 0, r = strlen(s)-1;
    while(l < r){
        if(s[l] != s[r]){
            printf("Not Palindrome");
            return 0;
        }
        l++; r--;
    }
    printf("Palindrome");
    return 0;
}
