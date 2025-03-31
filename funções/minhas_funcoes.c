#include "MinhasFuncoes.h"

const char* MeuNome() {
    return "Ruan";
}

int EhPrimo(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int ValorDeFibonacci(int i) {
    if (i <= 0) return 0;
    if (i == 1) return 1;

    int a = 0, b = 1, c;
    for (int j = 2; j <= i; j++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}