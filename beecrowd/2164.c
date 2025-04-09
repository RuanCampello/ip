#include <math.h>
#include <stdio.h>

double fib(int const n) {
    static const double sqrt5 = sqrt(5);
    static const double phi = (1 + sqrt5) / 2;
    static const double psi = (1 - sqrt5) / 2;


    return (pow(phi, n) - pow(psi, n)) / sqrt5;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%.1f\n", fib(n));
    return 0;
}
