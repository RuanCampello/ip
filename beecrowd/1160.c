#include <stdio.h>

int main() {
    int quant, years = 0;
    int pop_a, pop_b;
    double growth_a, growth_b;

    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        scanf("%d %d %lf %lf", &pop_a, &pop_b, &growth_a, &growth_b);

        while (pop_a <= pop_b && years <= 100) {
            pop_a += (int) (pop_a * (growth_a / 100.0));
            pop_b += (int) (pop_b * (growth_b / 100.0));
            years++;
        }

        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }

        years = 0;
    }

    return 0;
}
