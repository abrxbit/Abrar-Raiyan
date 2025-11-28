#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double d = b*b - 4*a*c;

    if(d > 0) {
        printf("Root1 = %.2lf\n", (-b + sqrt(d))/(2*a));
        printf("Root2 = %.2lf\n", (-b - sqrt(d))/(2*a));
    }
    else if(d == 0) {
        printf("Root = %.2lf\n", -b/(2*a));
    }
    else {
        double real = -b/(2*a);
        double imag = sqrt(-d)/(2*a);
        printf("Root1 = %.2lf + %.2lfi\n", real, imag);
        printf("Root2 = %.2lf - %.2lfi\n", real, imag);
    }

    return 0;
}
