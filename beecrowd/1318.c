#include <stdio.h>

int main(void) {
    int real_tickets, presents;

    while (1) {
        scanf("%d %d", &real_tickets, &presents);
        if (real_tickets == 0 && presents == 0)
            break;

        int tickets[presents];
        int frequency[10001] = {0};

        for (int i = 0; i < presents; i++) {
            scanf("%d", &tickets[i]);
            frequency[tickets[i]]++;
        }

        int fake_tickets = 0;
        for (int i = 1; i <= real_tickets; i++) {
            if (frequency[i] > 1)
                fake_tickets++;
        }

        printf("%d\n", fake_tickets);
    }
    return 0;
}
