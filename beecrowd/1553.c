#include <stdio.h>

int main() {
    int num_perguntas, min_frequencia;
    while (1) {
        scanf("%d %d", &num_perguntas, &min_frequencia);
        if (num_perguntas == 0 && min_frequencia == 0) {
            break;
        }
        int perguntas[num_perguntas];
        for (int i = 0; i < num_perguntas; i++) {
            scanf("%d", &perguntas[i]);
        }
        int quantidade[101] = {0};
        for (int i = 0; i < num_perguntas; i++) {
            quantidade[perguntas[i]]++;
        }
        int total_frequentes = 0;
        for (int i = 1; i <= 100; i++) {
            if (quantidade[i] >= min_frequencia) {
                total_frequentes++;
            }
        }
        printf("%d\n", total_frequentes);
    }
    return 0;
}
