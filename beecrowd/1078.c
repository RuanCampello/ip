#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, num, num * i);
    }

    return 0;
}
