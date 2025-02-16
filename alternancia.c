#include <stdio.h>

int main(void) {
    for (int i = 0; i < 200; i++) {
        if (i % 2 == 0) {
            printf("Só aprende a programar quem escreve programas\n");
        } else {
            printf("Quem não escreve programas não aprende a programar\n");
        }
    }
    return 0;
}
