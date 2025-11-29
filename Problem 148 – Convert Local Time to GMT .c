#include <stdio.h>
#include <time.h>
int main(){
    time_t t=time(NULL);
    struct tm *gmt=gmtime(&t);
    printf("%02d:%02d:%02d",
           gmt->tm_hour,gmt->tm_min,gmt->tm_sec);
    return 0;
}
