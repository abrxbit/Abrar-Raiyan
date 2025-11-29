#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    scanf("%s", s);
    char *l=s, *r=s+strlen(s)-1;
    while(l<r){
        if(*l != *r){
            printf("Not Palindrome");
            return 0;
        }
        l++; r--;
    }
    printf("Palindrome");
    return 0;
}
