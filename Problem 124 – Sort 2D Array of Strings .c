#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char s[n][100];
    for(int i=0;i<n;i++) scanf("%s", s[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])>0){
                char t[100];
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
    for(int i=0;i<n;i++) printf("%s\n", s[i]);
    return 0;
}
