#include <stdio.h>

int main(void) {
    float grades = 0, grade;
    int count = 0;

    do {
        printf("Digite uma nota: ");
        scanf("%f", &grade);

        grades += grade;
        count++;
    } while (grade != 0);
    count -= 1;
    if (count > 0) {
        grades /= (float) count;
    }

    printf("A média do(s) %d valor(es) é %0.2f", count, grades);

    return 0;
}
