#include <stdio.h>
int main(){
    char src[50], dest[50];
    scanf("%s %s", src, dest);
    FILE *a=fopen(src,"r");
    FILE *b=fopen(dest,"w");
    if(!a || !b){
        printf("Error");
        return 0;
    }
    int c;
    while((c=fgetc(a))!=EOF)
        fputc(c,b);
    fclose(a);
    fclose(b);
    return 0;
}
