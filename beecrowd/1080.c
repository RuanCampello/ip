#include <limits.h>
#include <stdio.h>

int main(void) {
    int greater = INT_MIN, pos = 0;

    for (int i = 0; i < 100; i++) {
        int curr;

        scanf("%d", &curr);
        if (curr > greater) {
            greater = curr;
            pos = i + 1;
        }
    }

    printf("%d\n%d\n", greater, pos);

    return 0;
}
