#include <stdio.h>

int main(void) {
    int quantity;

    // o array de notas e seu tamanho poderiam ter sido declarados fora da main.
    // mas, como sempre, prefiro manter a localidade de comportamento.
    const int notes[] = {100, 50, 20, 10, 5, 2, 1};
    const int length = sizeof(notes) / sizeof(notes[0]);

    printf("Digite o valor: ");
    scanf("%d", &quantity);

    for (int idx = 0; idx < length; idx++) {
        const int note = notes[idx];
        // espero que não se importe com o uso de snake case em vez de camel case :)
        const int number_of_notes = quantity / note;
        quantity %= notes[idx];

        printf("%d notas de %d\n", number_of_notes, note);
    }

    return 0;
}
