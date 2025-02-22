#include <stdio.h>
int main(void) {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // swap para garantir que a seja o maior valor
    if (a < b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    for (int i = b; i <= a; i++) {
        printf("%d ", i);
    }

    return 0;
}
