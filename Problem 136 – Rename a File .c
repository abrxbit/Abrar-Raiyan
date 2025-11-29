#include <stdio.h>
int main(){
    char old[50], new[50];
    scanf("%s %s", old, new);
    if(rename(old,new)==0) printf("Renamed");
    else printf("Error");
    return 0;
}
