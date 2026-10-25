#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[260], line[1000];
    if (scanf("%259s", filename) != 1) return 1;
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
    if (!fgets(line, sizeof(line), stdin)) return 1;
    line[strcspn(line, "\r\n")] = '\0';

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror(filename);
        return 1;
    }
    int failed = fprintf(file, "%s\n", line) < 0;
    if (fclose(file) != 0) failed = 1;
    if (failed) {
        perror(filename);
        return 1;
    }
    printf("Line appended successfully.\n");
    return 0;
}
