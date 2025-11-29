#include <stdio.h>
int main(){
    char f1[50], f2[50];
    scanf("%s %s", f1, f2);
    FILE *a=fopen(f1,"r");
    FILE *b=fopen(f2,"w");
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
