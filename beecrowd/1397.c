#include <stdio.h>

int count_points(const int player_selected_num) {
    int part1_points = 0, part2_points = 0;

    for (int i = 0; i < player_selected_num; i++) {
        int part1_num, part2_num;
        scanf("%d %d", &part1_num, &part2_num);

        if (part1_num > part2_num)
            part1_points++;
        else if (part2_num > part1_num)
            part2_points++;
    }
    printf("%d %d\n", part1_points, part2_points);
}

int main(void) {
    int part1, part2;

    scanf("%d", &part1);
    count_points(part1);
    scanf("%d", &part2);
    count_points(part2);
    scanf("%*d");

    return 0;
}
