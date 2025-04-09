#include <stdio.h>

int main() {
    int coluna;
    char op;
    float matriz[12][12], resultado = 0.0;

    scanf("%d", &coluna);
    scanf(" %c", &op);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        resultado += matriz[i][coluna];
    }

    if (op == 'M') {
        resultado /= 12.0;
    }

    printf("%.1f\n", resultado);
    return 0;
}
