#include <stdio.h>

char visited[1000000];

int main() {
    int quant;
    scanf("%d", &quant);

    unsigned long long t_rams = 0;
    unsigned rams[quant];
    for (int i = 0; i < quant; i++) {
        scanf("%u", &rams[i]);
        t_rams += rams[i];
    }

    int position = 0;
    unsigned long long attacks = 0;

    while (position >= 0 && position < quant) {
        if (!visited[position]) {
            attacks++;
            visited[position] = 1;
        }

        if (rams[position] % 2 != 0) {
            t_rams--;
            rams[position]--;
            position++;
        } else {
            if (rams[position]) {
                t_rams--;
                rams[position]--;
            }
            position--;
        }
    }

    printf("%llu %llu\n", attacks, t_rams);
    return 0;
}
