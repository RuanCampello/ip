#include <stdio.h>

void bubble_sort(int arr[], const int len) {
    for (int i = 0; i < len - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                const int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
}

int main(void) {
    int quant;
    scanf("%d", &quant);

    int arr[quant];
    for (int i = 0; i < quant; i++) {
        int curr;
        scanf("%d", &curr);

        arr[i] = curr;
    }

    bubble_sort(arr, quant);
    int curr = arr[0];
    int count = 1;

    for (int i = 1; i < quant; i++) {
        if (arr[i] == curr)
            count++;
        else {
            printf("%d aparece %d vez(es)\n", curr, count);
            curr = arr[i];
            count = 1;
        }
    }

    printf("%d aparece %d vez(es)\n", curr, count);
    return 0;
}
