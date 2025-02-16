#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int palpite, correto, cc = 0;

    srand(time(NULL));
    correto = rand() % 100;

    do {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);

        if (palpite > correto) {
            puts("Palpite alto!");
        } else if (palpite < correto) {
            puts("Palpite foi baixo!");
        }

        cc++;
    } while (palpite != correto);

    printf("Voce acertou em %d tentativas!", cc);
    return 0;
}
