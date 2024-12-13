#include<stdio.h>

#define PI 3.14159265

int main(void) {
    float diametro;

    printf("Insira o diâmetro do círculo: ");
    scanf("%f", &diametro);

    const float raio = diametro / 2;
    printf("O raio do círculo é: %.2f\n", raio);

    const float area = PI * (raio * raio);
    printf("A area do círculo é: %.2f\n", area);

    const float circunferencia = PI * diametro;
    printf("A circunferência do círculo é: %.2f\n", circunferencia);

    return 0;
}
