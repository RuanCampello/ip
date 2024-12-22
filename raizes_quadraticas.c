#include <math.h>
#include <stdio.h>

struct Roots {
    float delta;
    float root_one;
    float root_two;
};

struct Roots calc_roots(const float *a, const float *b, const float *c) {
    // poderia fazer só (*b)*(*b) para pegar b ao quadrado.
    // mas já importamos math mesmo...

    // diferente de pow e sqrt normais da lib math, os terminantes em ´f´ (powf, sqrtf...) retornam float's
    // em vez de double's
    // https://en.cppreference.com/w/c/numeric/math/pow

    const float delta = powf(*b, 2) - (4 * (*a) * (*c));
    float x1 = 0, x2 = 0;

    if (delta >= 0) {
        x1 = (-(*b) + sqrtf(delta)) / (2 * (*a));
        // esse if é "desnecessário", mas com ele, o valor de x2 só será computado caso realmente exista.
        // caso não houvesse esse if, o resultado seria o mesmo, porém teria uma computação inútil já que x1 = x2.
        if (delta > 0) {
            x2 = (-(*b) - sqrtf(delta)) / (2 * (*a));
        }
    }

    const struct Roots roots = {delta, x1, x2};
    return roots;
}

// pra retirar essa repetição de print -> scanf
// já que é bem padronizada.
void prompt_and_assign(float *value_to_be_assigned, const char letter_of_value) {
    printf("Entre o coeficiente para %c: ", letter_of_value);
    scanf("%f", value_to_be_assigned);
}

int main(void) {
    float a, b, c;

    prompt_and_assign(&a, 'A');
    prompt_and_assign(&b, 'B');
    prompt_and_assign(&c, 'C');

    if (a == 0) {
        printf("Os coeficientes não formam uma equação de segundo grau.\n"
               "Não é possível calcular suas raizes.\n");
        return 1;
    }

    const struct Roots roots = calc_roots(&a, &b, &c);

    if (roots.delta < 0) {
        printf("O equação não possui raizes nos números reais.\n");
        return 2;
    }

    // já que if anterior contém um return, esse funciona como um `else-if`.
    if (roots.delta == 0) {
        printf("A raiz é única e é igual a: %.2f.\n", roots.root_one);
    } else {
        printf("x1 é: %.2f e x2 é: %.2f.\n", roots.root_one, roots.root_two);
    }

    return 0;
}
