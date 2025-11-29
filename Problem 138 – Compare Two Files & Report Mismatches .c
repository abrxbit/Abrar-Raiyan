#include <stdio.h>
int main(){
    char f1[50], f2[50];
    scanf("%s %s", f1, f2);
    FILE *a=fopen(f1,"r");
    FILE *b=fopen(f2,"r");
    if(!a || !b){
        printf("Error");
        return 0;
    }
    int pos=1, c1, c2;
    while(1){
        c1=fgetc(a);
        c2=fgetc(b);
        if(c1==EOF || c2==EOF) break;
        if(c1!=c2)
            printf("Mismatch at %d: %c %c\n", pos, c1, c2);
        pos++;
    }
    fclose(a);
    fclose(b);
    return 0;
}
