#include <stdio.h>

#define LEN 1000

int main(void) {
    int quant;
    scanf("%d%*c", &quant);

    char str[LEN];
    for (int i = 0; i < quant; i++) {
        fgets(str, LEN, stdin);

        int j = 0;
        int leds = 0;
        while (str[j] != '\0') {
            switch (str[j]) {
                case '0':
                case '6':
                case '9':
                    leds += 6;
                    break;
                case '1':
                    leds += 2;
                    break;
                case '2':
                case '3':
                case '5':
                    leds += 5;
                    break;
                case '4':
                    leds += 4;
                    break;
                case '7':
                    leds += 3;
                    break;
                case '8':
                    leds += 7;
                    break;
            }


            j++;
        }

        printf("%d leds\n", leds);
    }

    return 0;
}
