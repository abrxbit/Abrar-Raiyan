#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    a[strcspn(a,"\n")] = 0;
    b[strcspn(b,"\n")] = 0;
    int c = strcmp(a, b);
    if(c == 0) printf("Equal");
    else if(c > 0) printf("String1 is greater");
    else printf("String2 is greater");
    return 0;
}
