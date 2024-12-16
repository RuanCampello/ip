#include<stdio.h>

int main(void) {
    int total_seconds;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_seconds);

    const int hours = total_seconds / 3600;
    const int minutes = (total_seconds % 3600) / 60;
    const int seconds = total_seconds % 60;

    printf("%d, em segudos, equivale a %02dh%02dm%02ds\n", total_seconds, hours, minutes, seconds);

    return 0;
}

