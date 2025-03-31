#include <stdio.h>

void sort(int arr[], int const size) {
    for (int i = 0; i < size - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        int const temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}


int main(void) {
    int quant;
    scanf("%d", &quant);

    for (int i = 0; i < quant; i++) {
        int t_students;
        scanf("%d", &t_students);

        int original[t_students], sorted[t_students];
        for (int j = 0; j < t_students; j++) {
            scanf("%d", &original[j]);
            sorted[j] = original[j];
        }

        sort(sorted, t_students);

        int not_reordered = 0;
        for (int j = 0; j < t_students; j++) {
            if (original[j] == sorted[j]) {
                not_reordered++;
            }
        }

        printf("%d\n", not_reordered);
    }

    return 0;
}
