#include <stdio.h>

int main(void) {
    unsigned long long int a, b;
    scanf("%llu %llu", &a, &b);

    unsigned long long int nat_sum = (b - a + 1) * (a + b) / 2;

    printf("%llu\n", nat_sum);

    return 0;
}
