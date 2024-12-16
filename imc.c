#include<stdio.h>

int main(void) {
    float altura, peso;

    printf("Insira a altura (m): ");
    scanf("%f", &altura);

    printf("Insira o peso (kg): ");
    scanf("%f", &peso);

    const float imc = peso / (altura * altura);
    printf("O IMC é: %.2f", imc);

    return 0;
}
