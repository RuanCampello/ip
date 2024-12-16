#include<stdio.h>

int main(void) {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nOs valores lidos para a e b foram: %d e %d\n", a, b);

    // isso usa "ou exclusivo" (XOR) em operações binárias, mas pode ser perigoso.
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nOs novos valores de a e b sao: %d e %d\n", a, b);

    return 0;
}
