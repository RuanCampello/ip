#include<stdio.h>

int main(void) {
    int base, height;

    printf("Entre o tamanho da base do triângulo: ");
    scanf("%d", &base);

    printf("Entre a altura do triângulo: ");
    scanf("%d", &height);

    // prefiro uma conversão "explicita" do que multiplicar por 2.0 ou 2.
    // fica mais claro (pelo menos para mim) e resulta igualmente.
    const float area = (float) (base * height) / 2;
    printf("A area do triângulo de base %d e altura %d é: %.2f", base, height, area);

    return 0;
}
