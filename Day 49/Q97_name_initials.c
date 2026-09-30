#include <stdio.h>
#include <ctype.h>

int main(void) {
    char name[300];
    if (!fgets(name, sizeof(name), stdin)) return 1;

    int at_word_start = 1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i])) {
            at_word_start = 1;
        } else if (at_word_start) {
            printf("%c.", (char)toupper((unsigned char)name[i]));
            at_word_start = 0;
            if (name[i + 1] != '\0' && !isspace((unsigned char)name[i + 1]))
                putchar(' ');
            else
                putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
