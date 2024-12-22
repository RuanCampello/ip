#include <stdio.h>

// como os valores serão usados apenas para leitura essencialmente,
// o mais óbvio é usar ponteiros simples.
float calc_ideal_weight(const char *sex, const float *height) {
    float ideal_weight;

    // costumo achar mais semântico usar switch quando se trata de um `char`, mas como o senhor
    // ainda não ministrou essa aula, deixarei aqui apenas como comentário, porém o resultado será o mesmo.

    // switch (*sex) {
    //     case 'M':
    //         ideal_weight = (float) (72.7 * (*height) - 58);
    //         break;
    //     case 'F':
    //         ideal_weight = (float) (62.1 * (*height) - 44.7);
    //         break;
    //     default:
    //         // o programa nunca chegará a esse caso.
    //         // pois os valores de `sex` são verificados anteriormente.
    //         ideal_weight = 0;
    //         break;
    // }

    if (*sex == 'M') {
        ideal_weight = (float) (72.7 * (*height) - 58);
    } else if (*sex == 'F') {
        ideal_weight = (float) (62.1 * (*height) - 44.7);
    } else {
        ideal_weight = 0; // não precisaria declarar um escopo pro `else`, mas acho isso muito feio.
    }

    return ideal_weight;
}

int main(void) {
    char sex;
    float height;

    printf("Entre seu sexo (M ou F): ");
    scanf("%c", &sex);

    if (sex != 'M' && sex != 'F') {
        printf("Você entrou um valor inválido para sexo %c.\n", sex);
        printf("O sexo deve ser M para masculino ou F para feminino.");

        return 1;
    }

    printf("Entre sua altura (metros): ");
    scanf("%f", &height);

    const float ideal_weight = calc_ideal_weight(&sex, &height);
    printf("O peso ideal para %c com %.2f metros de altura é: %.1fkg", sex, height, ideal_weight);

    return 0;
}
