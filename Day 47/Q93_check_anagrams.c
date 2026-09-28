#include <stdio.h>
#include <string.h>

int main(void) {
    char first[500], second[500];
    int count[256] = {0};

    if (!fgets(first, sizeof(first), stdin) ||
        !fgets(second, sizeof(second), stdin))
        return 1;

    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';

    if (strlen(first) != strlen(second)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; first[i] != '\0'; i++) {
        count[(unsigned char)first[i]]++;
        count[(unsigned char)second[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
