#include <stdio.h>
#include "MinhasFuncoes.h"

int main() {
    const char *nome = MeuNome();
    printf("Meu nome é: %s\n", nome);

    const int num = 21;
    if (EhPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    const int index = 10;
    const int fibValue = ValorDeFibonacci(index);
    printf("O valor de Fibonacci na posição %d é: %d\n", index, fibValue);

    return 0;
}