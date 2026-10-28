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

    long long vowels = 0, consonants = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            int letter = tolower((unsigned char)ch);
            if (letter == 'a' || letter == 'e' || letter == 'i' ||
                letter == 'o' || letter == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    if (ferror(file)) {
        perror(filename);
        fclose(file);
        return 1;
    }
    fclose(file);
    printf("Vowels: %lld\nConsonants: %lld\n", vowels, consonants);
    return 0;
}
