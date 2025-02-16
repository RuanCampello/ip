#include <stdio.h>
int main(void) {
    float height, weight;
    printf("Digite a altura (metros): ");
    scanf("%f", &height);
    printf("Digite o peso (kg): ");
    scanf("%f", &weight);

    const float imc = weight / (height * height);

    if (imc <= 18.5) {
        printf("Baixo peso");
    } else if (imc > 18.5 && imc <= 25) {
        printf("Normal");
    } else if (imc > 25 && imc <= 30) {
        printf("Sobrepeso");
    } else {
        printf("Obesidade");
    }

    return 0;
}
