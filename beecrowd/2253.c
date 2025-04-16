#include <stdio.h>
#include <string.h>

int is_valid_char(char c) { return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'); }

int validate_str(char *str) {
    int has_upper = 0, has_lower = 0, has_digit = 0;
    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n') {
        str[--len] = '\0';
    }

    if (len < 6 || len > 32)
        return 0;

    for (int i = 0; i < len; i++) {
        const char c = str[i];
        if (!is_valid_char(c))
            return 0;
        if (c >= 'A' && c <= 'Z')
            has_upper = 1;
        else if (c >= 'a' && c <= 'z')
            has_lower = 1;
        else if (c >= '0' && c <= '9')
            has_digit = 1;
    }

    return has_upper && has_lower && has_digit;
}

int main(void) {
    char str[100];

    while (fgets(str, sizeof(str), stdin)) {
        if (validate_str(str))
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
    }

    return 0;
}
