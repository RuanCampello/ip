#include <stdio.h>

#define TAMANHO_MAXIMO 61

int main() {
    int quantidade_botas;

    while (scanf("%d", &quantidade_botas) != EOF) {
        int pe_esquerdo[TAMANHO_MAXIMO] = {0};
        int pe_direito[TAMANHO_MAXIMO] = {0};

        for (int i = 0; i < quantidade_botas; i++) {
            int tamanho;
            char pe;
            scanf("%d %c", &tamanho, &pe);

            if (pe == 'E') {
                pe_esquerdo[tamanho]++;
            } else if (pe == 'D') {
                pe_direito[tamanho]++;
            }
        }

        int pares_completos = 0;
        for (int num = 30; num <= 60; num++) {
            if (pe_esquerdo[num] < pe_direito[num]) {
                pares_completos += pe_esquerdo[num];
            } else {
                pares_completos += pe_direito[num];
            }
        }

        printf("%d\n", pares_completos);
    }
    return 0;
}
