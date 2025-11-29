#include <stdio.h>
#include <string.h>
int main(){
    char fname[50], pattern[50], line[200];
    scanf("%s %s", fname, pattern);
    FILE *fp=fopen(fname,"r");
    if(!fp){ printf("Error"); return 0; }
    while(fgets(line,200,fp))
        if(strstr(line,pattern))
            printf("%s", line);
    fclose(fp);
    return 0;
}
