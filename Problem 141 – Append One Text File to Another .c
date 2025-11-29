#include <stdio.h>
int main(){
    char f1[50], f2[50];
    scanf("%s %s", f1, f2);
    FILE *a=fopen(f1,"r");
    FILE *b=fopen(f2,"a");
    if(!a || !b){
        printf("Error");
        return 0;
    }
    int ch;
    while((ch=fgetc(a))!=EOF)
        fputc(ch,b);
    fclose(a);
    fclose(b);
    return 0;
}
