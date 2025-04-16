#include <stdio.h>
#include <string.h>

int is_vowel(const char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

void extract_vowels(const char *laugh, char *vowels) {
    int j = 0;
    for (int i = 0; laugh[i] != '\0'; i++) {
        if (is_vowel(laugh[i])) {
            vowels[j++] = laugh[i];
        }
    }
    vowels[j] = '\0';
}

int is_palindrome(const char *str) {
    const int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char laugh[51];
    fgets(laugh, sizeof(laugh), stdin);

    size_t len = strlen(laugh);
    if (len > 0 && laugh[len - 1] == '\n') {
        laugh[--len] = '\0';
    }

    char vowels[51];
    extract_vowels(laugh, vowels);

    printf("%s\n", is_palindrome(vowels) ? "S\n" : "N\n");

    return 0;
}
