#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[500];
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)text[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            putchar(text[i]);
    }

    return 0;
}
