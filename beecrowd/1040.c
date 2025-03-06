#include <stdio.h>

int main(void) {
    float grade1, grade2, grade3, grade4;

    scanf("%f %f %f %f", &grade1, &grade2, &grade3, &grade4);
    const float medium = ((grade1 * 2) + (grade2 * 3) + (grade3 * 4) + (grade4)) / 10;

    if (medium < 5.0) {
        printf("Media: %.1f\nAluno reprovado.\n", medium);
    } else if (medium >= 5.0 && medium <= 6.9) {
        float test;
        printf("Media: %.1f\n", medium);
        printf("Aluno em exame.\n");
        scanf("%f", &test);
        printf("Nota do exame: %.1f\n", test);

        const float final = (medium + test) / 2;
        if (final >= 5.0)
            puts("Aluno aprovado.");
        else
            puts("Aluno reprovado.");
        printf("Media final: %.1f\n", final);
    } else {
        printf("Media: %.1f\nAluno aprovado.\n", medium);
    }

    return 0;
}
