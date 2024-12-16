#include<stdio.h>

int main(void) {
    float grades_of_bi[4];

    for (int bimester = 0; bimester < 4; bimester++) {
        printf("Entre a nota do %dº bimestre: ", bimester + 1);
        scanf("%f", &grades_of_bi[bimester]);
    }

    // isso também funciona, sem necessidade de for loop e criação de uma variavel mutável
    // const float weighted_avg = ((grades_of_bi[0] * 1) + (grades_of_bi[1] * 2) + (grades_of_bi[2] * 3) + (
    //                                 grades_of_bi[3] * 4)) / 10;

    float avg = 0;
    for (int idx = 0; idx < 4; idx++) {
        // idx + 1 seria o peso de cada nota [1, 2, 3, 4] já que idx começa de 0.
        // isso seria, portanto, cada nota multiplicada pelo seu respectivo peso.
        avg += grades_of_bi[idx] * (float) (idx + 1);;
    }

    printf("A média ponderada é: %.2f", avg / 10);

    return 0;
}

