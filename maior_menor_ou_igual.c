#include <stdio.h>
int main(void) {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a < b) {
        printf("A (%d) é o menor", a);
    } else if (a == b) {
        printf("A (%d) é igual que B (%d)", a, b);
    } else {
        printf("B (%d) é o menor", b);
    }

    return 0;
}
