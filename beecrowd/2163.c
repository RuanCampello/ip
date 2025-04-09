#include <stdio.h>

int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    int terreno[linhas][colunas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &terreno[i][j]);
        }
    }

    int x = 0, y = 0;

    for (int i = 1; i < linhas - 1; i++) {
        for (int j = 1; j < colunas - 1; j++) {
            if (terreno[i][j] == 42) {
                int eh_sabre = 1;
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        if (di == 0 && dj == 0)
                            continue;
                        if (terreno[i + di][j + dj] != 7) {
                            eh_sabre = 0;
                            break;
                        }
                    }
                    if (!eh_sabre)
                        break;
                }
                if (eh_sabre) {
                    x = i + 1;
                    y = j + 1;
                    printf("%d %d\n", x, y);
                    return 0;
                }
            }
        }
    }

    printf("0 0\n");
    return 0;
}
