#include <stdio.h>

#define GREAT_THRESHOLD 4500.00
#define MEDIUM_THRESHOLD 3000.00
#define SMALL_THRESHOLD 2000.00

int main(void) {
    double tax = 0.0, salary;
    scanf("%lf", &salary);

    if (salary > GREAT_THRESHOLD) {
        tax += (salary - GREAT_THRESHOLD) * 0.28;
        salary = GREAT_THRESHOLD;
    }
    if (salary > MEDIUM_THRESHOLD) {
        tax += (salary - MEDIUM_THRESHOLD) * 0.18;
        salary = MEDIUM_THRESHOLD;
    }
    if (salary > SMALL_THRESHOLD) {
        tax += (salary - SMALL_THRESHOLD) * 0.08;
        salary = SMALL_THRESHOLD;
    }

    if (tax > 0) {
        printf("R$ %0.2f\n", tax);
    } else {
        printf("Isento\n");
    }

    return 0;
}
