#include<stdio.h>

int main(void) {
    int a, b;

    printf("Entre o valor de A: ");
    scanf("%d", &a);

    printf("Entre o valor de B: ");
    scanf("%d", &b);

    // isso usa "ou exclusivo" (XOR) em operações binárias, mas pode ser perigoso.
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A = %d, b = %d", a, b);

    return 0;
}
