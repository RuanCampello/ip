#include <stdio.h>]

void count_points(int *mary_points, int *john_points, const int end) {
    for (int i = 0; i < end; i++) {
        int curr;
        scanf("%d", &curr);

        if (curr == 0)
            (*mary_points)++;
        else if (curr == 1)
            (*john_points)++;
    }

    printf("Mary won %d times and John won %d times\n", *mary_points, *john_points);
    *mary_points = 0;
    *john_points = 0;
}

int main(void) {
    int mary = 0, john = 0, num;

    while (1) {
        scanf("%d", &num);
        if (num == 0)
            break;

        count_points(&mary, &john, num);
    }

    return 0;
}
