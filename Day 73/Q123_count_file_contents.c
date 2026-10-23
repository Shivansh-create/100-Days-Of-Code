#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[260];
    if (scanf("%259s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror(filename);
        return 1;
    }

    long long characters = 0, words = 0, lines = 0;
    int ch, in_word = 0, has_character = 0, last_character = '\0';
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        has_character = 1;
        last_character = ch;
        if (ch == '\n') lines++;
        if (isspace((unsigned char)ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    if (ferror(file)) {
        perror(filename);
        fclose(file);
        return 1;
    }
    if (has_character && last_character != '\n') lines++;
    fclose(file);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", characters, words, lines);
    return 0;
}
