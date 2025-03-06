#include <stdio.h>

int main(void) {
    double valor, valor_g, valor_e;
    int points;
    scanf("%lf %lf %lf %d", &valor, &valor_g, &valor_e, &points);

    const double liters_g = valor / valor_g;
    const double liters_e = valor / valor_e;
    const double effective_le = liters_e * 0.7;

    if (effective_le > liters_g) {
        const int new_points = points + (int) (liters_e / 10);
        const int discount_per = new_points / 5;
        const double discount = discount_per * 0.01;
        const double final_price_e = valor_e * (1 - discount);
        const double final_prince = valor / final_price_e;

        printf("%.2lf litros de etanol\n", final_prince);
        printf("Pontos restantes: %d\n", new_points % 5);
    } else {
        const int new_points = points + (int) (liters_g / 10);
        const int discount_per = new_points / 5;
        const double discount = discount_per * 0.01;
        const double final_price_g = valor_g * (1 - discount);
        const double final_prince = valor / final_price_g;

        printf("%.2lf litros de gasolina\n", final_prince);
        printf("Pontos restantes: %d\n", new_points % 5);
    }

    return 0;
}
