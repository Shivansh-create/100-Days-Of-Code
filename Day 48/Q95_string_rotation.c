#include <stdio.h>
#include <string.h>

int main(void) {
    char first[500], second[500], joined[1000];
    if (!fgets(first, sizeof(first), stdin) ||
        !fgets(second, sizeof(second), stdin))
        return 1;

    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    if (strlen(first) != strlen(second)) {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(joined, first);
    strcat(joined, first);
    printf("%s\n", strstr(joined, second) ? "Rotation" : "Not a rotation");
    return 0;
}
