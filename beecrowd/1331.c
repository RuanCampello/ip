#include <stdio.h>

int main(void) {
    int start, end, total = 0;
    scanf("%d %d", &start, &end);


    if (end < start) {
        end = end + start;
        start = end - start;
        end = end - start;
    }

    for (int i = start; i <= end; i++) {
        total += i;
    }

    printf("%d\n", total);
    return 0;
}
