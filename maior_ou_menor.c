#include<stdio.h>


int main(void) {
    int a, b;

    printf("Digite o valor de A (número inteiro): ");
    scanf("%d", &a);

    printf("Digite o valor de B (número inteiro): ");
    scanf("%d", &b);

    if (a > b) {
        printf("A: %d é maior que B: %d", a, b);
    } else {
        printf("B: %d é maior que A: %d", b, a);
    }

    // O snippet abaixo também funciona, caso queiramos verificar a igualdade entre os valores.
    // Perguntei para o senhor em aula sobre a existência de um ´else-if´ statement em C,
    // e recebi uma resposta negativa. Resolvi pesquisar sobre e achei uma grande confusão.
    // No StackOverflow: https://stackoverflow.com/questions/37024948/does-an-else-if-statement-exist
    // é dito que o CONSTRUTOR de ´else-if´ não existe em C. Seria como se fosse um encadeamento lógico entre expressões
    // ´else´ e ´if´s resumido, não uma keyword/operação diferente.
    // No "The C Programming Language", 2a edição: https://ia903407.us.archive.org/35/items/the-ansi-c-programming-language-by-brian-w.-kernighan-dennis-m.-ritchie.org/The%20ANSI%20C%20Programming%20Language%20by%20Brian%20W.%20Kernighan%2C%20Dennis%20M.%20Ritchie.pdf
    // Há capitulo (3.3) dedicado exclusivamente para o ´else-if´, em que explica superficialmente esse encadeamento, por ser um livro "introdutório".

    // if (a > b) {
    //     printf("A: %d é maior que B: %d", a, b);
    // } else if (a == b) {
    //     printf("A: %d é igual que B: %d", a, b);
    // } else {
    //     printf("B: %d é maior que A: %d", b, a);
    // }

    return 0;
}

