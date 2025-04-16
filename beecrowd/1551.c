#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char phrase[1100];
    unsigned short cases, letters = 0;
    bool has_letter = false;

    scanf("%hu", &cases);
    getchar();

    while (cases--) {
        char alfabeto[30] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                             'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
        fgets(phrase, sizeof(phrase), stdin);

        const size_t len = strlen(phrase);
        if (len > 0 && phrase[len - 1] == '\n') {
            phrase[len - 1] = '\0';
        }

        const unsigned short len_alpha = strlen(alfabeto);
        const unsigned short len_phrase = strlen(phrase);

        for (unsigned short i = 0; i < len_phrase; i++) {
            const char c = tolower(phrase[i]);
            if (c >= 'a' && c <= 'z') {
                for (unsigned short j = 0; j < len_alpha; j++)
                    if (c == alfabeto[j]) {
                        has_letter = true;
                        alfabeto[j] = '1';
                        break;
                    }

                if (has_letter)
                    letters++;

                has_letter = false;
            }
        }

        if (letters == 26)
            printf("frase completa\n");
        else if (letters >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");

        letters = 0;
    }

    return 0;
}
