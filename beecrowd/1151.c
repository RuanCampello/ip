#include <stdio.h>

int main(void) {
    int end;

    scanf("%d", &end);

    int fib[end];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < end; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < end; i++) {
        printf("%d", fib[i]);
        if (i != end - 1)
            printf(" ");
    }
    puts("");

    return 0;
}
