#include <stdio.h>
int main(void) {
    int quant;
    int total = 0, total_r = 0, total_c = 0, total_s = 0;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        int num;
        char type;

        scanf("%d %c", &num, &type);
        total += num;
        switch (type) {
            case 'C':
                total_c += num;
                break;
            case 'R':
                total_r += num;
                break;
            case 'S':
                total_s += num;
                break;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", total_c);
    printf("Total de ratos: %d\n", total_r);
    printf("Total de sapos: %d\n", total_s);
    printf("Percentual de coelhos: %.2f %%\n", ((float) total_c / (float) total) * 100.00);
    printf("Percentual de ratos: %.2f %%\n", ((float) total_r / (float) total) * 100.00);
    printf("Percentual de sapos: %.2f %%\n", ((float) total_s / (float) total) * 100.00);
    return 0;
}
