#include <stdio.h>

int main(void) {
    char line[500];
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("info.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
        fputs(line, stdout);
    if (ferror(file)) {
        perror("info.txt");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}
