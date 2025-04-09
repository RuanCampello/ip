#include <stdio.h>

int main(void) {
    int n;
    int div_2 = 0, div_3 = 0, div_4 = 0, div_5 = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        int curr;
        scanf("%d", &curr);
        arr[i] = curr;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            div_2++;
        if (arr[i] % 3 == 0)
            div_3++;
        if (arr[i] % 4 == 0)
            div_4++;
        if (arr[i] % 5 == 0)
            div_5++;
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", div_2, div_3, div_4,
           div_5);

    return 0;
}
