#include <limits.h>
#include <stdio.h>

int main(void) {
    int count = 0, maior = INT_MIN, menor = INT_MAX, next;

    do {
        printf("Digite um valor: ");
        scanf("%d", &next);

        if (next != 0) {
            if (next > maior)
                maior = next;
            if (next < menor)
                menor = next;
        }

        count++;
    } while (next != 0);

    printf("O maior valor foi: %d\nO menor valor foi: %d", maior, menor);

    return 0;
}
