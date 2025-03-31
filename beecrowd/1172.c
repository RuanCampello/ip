#include <stdio.h>

#define MAX 10

int main() {
    int arr[MAX];

    for (int i = 0; i < MAX; i++) {
        int curr;
        scanf("%d", &curr);

        if (curr <= 0)
            arr[i] = 1;

        else
            arr[i] = curr;
    }

    for (int i = 0; i < MAX; i++) {
        printf("X[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
