#include <stdio.h>
int main(){
    char f[50];
    scanf("%s", f);
    if(chmod(f,0444)==0) printf("Read Only Set");
    else printf("Error");
    return 0;
}
