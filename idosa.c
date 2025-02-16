#include <stdio.h>

int main(void) {
    int age;
    printf("Digite a idade: ");
    scanf("%d", &age);

    // usei os intervalos de idade "jovem" do estatuto da juventude
    // e o intervalo de "idoso" do estatuto do idoso
    // então o "adulto" foi o intervalo intermediario.
    // mas são valores relativamente arbitrários.
    if (age >= 0 && age <= 29) {
        printf("Jovem\n");
    } else if (age > 29 && age <= 59) {
        printf("Adulto\n");
    } else if (age > 60) {
        printf("Idoso\n");
    } else {
        printf("Idade inválida");
        return 1;
    }

    return 0;
}
