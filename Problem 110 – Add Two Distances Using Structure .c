#include <stdio.h>
struct Distance{
    int feet;
    int inch;
};
int main(){
    struct Distance d1, d2, sum;
    scanf("%d %d", &d1.feet, &d1.inch);
    scanf("%d %d", &d2.feet, &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if(sum.inch >= 12){
        sum.feet += sum.inch/12;
        sum.inch %= 12;
    }
    printf("%d %d", sum.feet, sum.inch);
    return 0;
}
