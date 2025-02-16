#include <stdio.h>

void prompt_and_assign(int *value_to_be_assigned, const char letter_of_value) {
    printf("Digite o valor para %c: ", letter_of_value);
    scanf("%d", value_to_be_assigned);
}

int main(void) {
    int a, b, c;

    prompt_and_assign(&a, 'A');
    prompt_and_assign(&b, 'B');
    prompt_and_assign(&c, 'C');

    if (a == b && b == c) {
        printf("Todos os valores são iguais a %d", a);
        return 0;
    }

    // para faciliar as comparações, a gente pode apenas iniciar o valor de
    // greater como A, então comparar com B e C.
    int greater = a;
    char letter = 'A';
    if (b > greater) {
        greater = b;
        letter = 'B';
    }
    if (c > greater) {
        greater = c;
        letter = 'C';
    }

    printf("O maior valor é o de %c que é %d", letter, greater);

    return 0;
}
