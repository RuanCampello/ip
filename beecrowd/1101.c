#include <stdio.h>

// nos poderiamos fazer um swap normalmente

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int greater, smaller;

    while (1) {
        int sum = 0;
        scanf("%d %d", &greater, &smaller);

        const int temp = MIN(greater, smaller);
        greater = MAX(greater, smaller);
        smaller = temp;

        if (smaller <= 0)
            break;

        for (int i = smaller; i <= greater; i++) {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    };

    return 0;
}
