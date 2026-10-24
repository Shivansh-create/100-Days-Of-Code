#include <stdio.h>
#include <string.h>

int main(void) {
    char source_name[260], destination_name[260];
    if (scanf("%259s %259s", source_name, destination_name) != 2) return 1;
    if (strcmp(source_name, destination_name) == 0) {
        printf("Source and destination must be different files.\n");
        return 1;
    }

    FILE *source = fopen(source_name, "r");
    if (source == NULL) {
        perror(source_name);
        return 1;
    }
    FILE *destination = fopen(destination_name, "w");
    if (destination == NULL) {
        perror(destination_name);
        fclose(source);
        return 1;
    }

    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (fputc(ch, destination) == EOF) {
            perror(destination_name);
            fclose(source);
            fclose(destination);
            return 1;
        }
    }

    int failed = ferror(source);
    if (fclose(source) != 0) failed = 1;
    if (fclose(destination) != 0) failed = 1;
    if (failed) {
        perror("File copy");
        return 1;
    }
    printf("File copied successfully.\n");
    return 0;
}
