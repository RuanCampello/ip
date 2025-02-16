#include <stdio.h>

#define L_RANGE (-10)
#define H_RANGE (10)

int main(void) {
    int cc = L_RANGE;

    while (cc <= H_RANGE) {
        printf("%d\n", cc);
        cc++;
    }
    cc = L_RANGE; // reseta o lower range

    do {
        printf("%d\n", cc);
        cc++;
    } while (cc <= H_RANGE);

    for (int cc = L_RANGE; cc <= H_RANGE; cc++) {
        printf("%d\n", cc);
    }
}
