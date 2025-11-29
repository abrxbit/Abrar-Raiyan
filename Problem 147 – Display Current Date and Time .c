#include <stdio.h>
#include <time.h>
int main(){
    time_t t=time(NULL);
    struct tm *tm=localtime(&t);
    printf("%02d-%02d-%04d %02d:%02d:%02d",
        tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900,
        tm->tm_hour, tm->tm_min, tm->tm_sec);
    return 0;
}
