#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof(text), stdin)) return 1;

    int first_letter = 1;
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (isalpha(ch)) {
            text[i] = (char)(first_letter ? toupper(ch) : tolower(ch));
            first_letter = 0;
        }
    }

    printf("%s", text);
    return 0;
}
