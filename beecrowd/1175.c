#include <stdio.h>

#define LEN 20

int main(void) {
    int n[LEN];

    for (int i = 0; i < LEN; i++) {
        int curr;
        scanf("%d", &curr);

        n[LEN - i - 1] = curr;
    }

    for (int i = 0; i < LEN; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
