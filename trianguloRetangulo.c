#include <math.h>
#include <stdio.h>

int VerificaTrianguloRetangulo(float a, float b, float c) { return (a * a + b * b == c * c); }

float CalculaLadoFaltante(float a, float b, float c) {
    if (a <= 0 && b > 0 && c > 0) {
        return sqrt(c * c - b * b);
    }
    if (a > 0 && b <= 0 && c > 0) {
        return sqrt(c * c - a * a);
    }
    if (a > 0 && b > 0 && c <= 0) {
        return sqrt(a * a + b * b);
    }
    {
        return -1;
    }
}

int main(void) {
    float a, b, c;


    printf("Digite os valores dos catetos a e b: ");
    scanf("%f %f", &a, &b);
    printf("Digite o valor da hipotenusa c: ");
    scanf("%f", &c);


    if (a > 0 && b > 0 && c > 0) {
        if (VerificaTrianguloRetangulo(a, b, c)) {
            printf("Os valores %.1f, %.1f e %.1f formam um triangulo retangulo.\n", a, b, c);
        } else {
            printf("Os valores %.1f, %.1f e %.1f NAO formam um triangulo retangulo.\n", a, b, c);
        }
    } else {
        const float ladoFaltante = CalculaLadoFaltante(a, b, c);

        if (ladoFaltante != -1) {
            if (a <= 0) {
                a = ladoFaltante;
            } else if (b <= 0) {
                b = ladoFaltante;
            } else if (c <= 0) {
                c = ladoFaltante;
            }
            printf("Para formar um triangulo retangulo, use a=%.1f, b=%.1f, c=%.1f\n", a, b, c);
        } else {
            printf("Entrada invalida: mais de um valor invalido.\n");
        }
    }

    return 0;
}
