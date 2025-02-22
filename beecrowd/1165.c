#include <stdio.h>

int is_prime(const int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int quant;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        int num;
        scanf("%d", &num);

        if (is_prime(num))
            printf("%d eh primo\n", num);
        else
            printf("%d nao eh primo\n", num);
    }
    return 0;
}
