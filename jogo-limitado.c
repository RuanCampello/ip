#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int palpite, correto, cc = 5;

    srand(time(NULL));
    correto = rand() % 100;

    do {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);
        cc--;

        if (palpite > correto) {
            puts("Palpite alto!");
        } else if (palpite < correto) {
            puts("Palpite foi baixo!");
        }

        if (palpite != correto && cc)
            printf("Restam %d tentativa(s)!\n", cc);
    } while (palpite != correto && cc);

    if (palpite == correto) {
        printf("Voce acertou em %d tentativa(s)!", cc);

    } else {
        printf("Você errou! O número era %d\n", correto);
    }
    return 0;
}
