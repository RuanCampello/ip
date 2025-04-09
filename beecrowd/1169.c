#include <math.h>
#include <stdio.h>

int main() {
    int quant;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        int n;
        scanf("%d", &n);

        const double res = pow(2, n);
        printf("%1.f kg\n", trunc(res / 12000));
    }

    return 0;
}
