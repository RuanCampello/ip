#include <stdio.h>

/****
 * AdicioneNaMedia(): Calcula a média acumulada de todos os valores inseridos.
 *
 * Parametros:
 *    valor (entrada): o valor a ser adicionado à média.
 *
 * Retorno: A função retorna a média de todos os valores já inseridos.
 ****/
double AdicioneNaMedia(double valor) {
    static double soma = 0;
    static int quantidade = 0;

    soma += valor;
    quantidade++;
    return soma / quantidade;
}

int main(void) {
    int n;
    double valor;

    printf("Quantos valores serao inseridos? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%lf", &valor);

        double media = AdicioneNaMedia(valor);
        printf("Media atual: %.2f\n", media);
    }

    return 0;
}