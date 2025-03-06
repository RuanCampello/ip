#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        if (a % 2 == 0)
            printf("A eh maior e PAR.\n");
        else
            printf("A eh maior e IMPAR.\n");
    } else if (b > a) {
        if (b % 2 == 0)
            printf("B eh maior e PAR.\n");
        else
            printf("B eh maior e IMPAR.\n");
    } else {
        printf("A e B sao iguais.\n");
    }
}
