#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        perror("input.txt");
        return 1;
    }
    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        perror("output.txt");
        fclose(input);
        return 1;
    }

    int ch;
    while ((ch = fgetc(input)) != EOF) {
        if (fputc(toupper((unsigned char)ch), output) == EOF) {
            perror("output.txt");
            fclose(input);
            fclose(output);
            return 1;
        }
    }

    int failed = ferror(input);
    if (fclose(input) != 0) failed = 1;
    if (fclose(output) != 0) failed = 1;
    if (failed) {
        perror("File conversion");
        return 1;
    }
    printf("Converted text saved to output.txt.\n");
    return 0;
}
