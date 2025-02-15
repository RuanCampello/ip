#include <stdio.h>

int main() {
    int tea, answers[5], count = 0;
    scanf("%d", &tea);

    // usar comparações diretas seria matematicamente mais rápido,
    // mas como o são poucas iterações (5), na prática, é uma diferença irrisória
    for (int i = 0; i < 5; i++) {
        scanf("%d", &answers[i]);
        if (answers[i] == tea) {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
