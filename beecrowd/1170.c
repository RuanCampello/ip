#include <stdio.h>

int main() {
    int quant;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        float food;
        int days = 0;
        scanf("%f", &food);

        while (food > 1) {
            food /= 2;
            days++;
        };

        printf("%d dias\n", days);
    };

    return 0;
}
