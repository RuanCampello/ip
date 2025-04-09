#include <limits.h>
#include <stdio.h>

int main(void) {
    int n, pos, lowest = INT_MAX;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        int curr;
        scanf("%d", &curr);

        arr[i] = curr;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < lowest) {
            pos = i;
            lowest = arr[i];
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", lowest, pos);
    return 0;
}
