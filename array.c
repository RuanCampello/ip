#define SIZE 10
#include <limits.h>
#include <stdio.h>

float media_array(const int arr[], const int len) {
    int total = 0;

    for (int i = 0; i < len; i++) {
        total += arr[i];
    }

    return (float) total / (float) len;
}

int em_array(const int arr[], const int len, const int pat) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == pat)
            return 1;
    }

    return 0;
}

int valor_max_array(const int arr[], const int len) {
    int max = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int eh_ordenado(const int arr[], const int len) {
    for (int i = 1; i < len; i++) {
        if (arr[i - 1] > arr[i])
            return 0;
    }

    return 1;
}


int main(void) {
    // versão referente a primeira questão
    // const int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // versão referente a segunda questão
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // ordem crescente
    printf("Array em ordem crescente: \n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
    // ordem decrescente
    printf("Array em ordem decrescente: \n");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    printf("o elemento da 5th posicao eh: %d\n", arr[4]);

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 != 0)
            printf("%d: %d\n", i, arr[i]);
    }

    int soma = 0;
    for (int i = 0; i < SIZE; i++) {
        soma += arr[i];
    }

    printf("A soma de todos os elementos do array eh: %d\n", soma);

    // parte relativa à terceira questão
    printf("Media dos valores do array: %.2f\n", media_array(arr, SIZE));

    // parte relativa à quarta questão
    printf("O valor 10 está no array? ");
    if (em_array(arr, SIZE, 10))
        printf("Sim\n");
    else
        printf("Não\n");

    // parte relativa à quinta questão
    printf("O valor maximo do array eh: %d\n", valor_max_array(arr, SIZE));

    // parte relativa à sexta questão
    printf("O array eh ordenado? ");
    if (eh_ordenado(arr, SIZE))
        printf("Sim\n");
    else
        printf("Não\n");

    return 0;
}
