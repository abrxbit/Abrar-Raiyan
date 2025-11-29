#include <stdio.h>
int main(){
    FILE *fp = tmpfile();
    if(fp==NULL){
        printf("Error");
        return 0;
    }
    fputs("Temp file created", fp);
    rewind(fp);
    char c;
    while((c=fgetc(fp))!=EOF) printf("%c", c);
    fclose(fp);
    return 0;
}
