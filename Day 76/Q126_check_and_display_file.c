#include <stdio.h>

int main(void) {
    char filename[260];
    if (scanf("%259s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror(filename);
        return 1;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF)
        putchar(ch);
    if (ferror(file)) {
        perror(filename);
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
