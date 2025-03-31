#include <stdio.h>

int main(void) {
    int participants;
    while (scanf("%d", &participants) != EOF) {

        int start[participants], arrival[participants];
        int arrival_position[participants + 1];

        for (int i = 0; i < participants; i++) {
            scanf("%d", &start[i]);
        }

        for (int i = 0; i < participants; i++) {
            scanf("%d", &arrival[i]);
            arrival_position[arrival[i]] = i;
        }

        int overtakes = 0;

        for (int i = 0; i < participants; i++) {
            for (int k = i + 1; k < participants; k++) {
                if (arrival_position[start[i]] > arrival_position[start[k]]) {
                    overtakes++;
                }
            }
        }

        printf("%d\n", overtakes);
    }

    return 0;
}
