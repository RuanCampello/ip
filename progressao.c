#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void) {
    int t1, r, n, sum = 0;
    char type;

    puts("Digite o tipo de progressão (a ou g): ");
    scanf("%c", &type);
    type = tolower(type);

    puts("Informe o primeiro termo da progressão: ");
    scanf("%d", &t1);

    puts("Informe a razão da progressão: ");
    scanf("%d", &r);

    puts("Informe a quantidade de elementos da progressão: ");
    scanf("%d", &n);

    if (type == 'a') {
        for (int i = 0; i < n; i++) {
            const int el = t1 + i * r;
            printf("%d ", el);
            sum += el;
        }
    } else if (type == 'g') {
        for (int i = 0; i < n; i++) {
            const int el = t1 * (int) pow(r, i);
            printf("%d ", el);
            sum += el;
        }
    } else {
        puts("Valor inválido. Escolha 'g' para progressão geométrica ou 'a' para aritmética.");
        return 1;
    }

    printf("\nA soma total dos valores da progressão é %d\n", sum);
    return 0;
}
