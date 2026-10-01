#include <stdio.h>
#include <string.h>

int main(void) {
    char text[300];
    if (!fgets(text, sizeof(text), stdin)) return 1;
    text[strcspn(text, "\r\n")] = '\0';

    for (int start = 0; text[start] != '\0'; start++) {
        for (int end = start; text[end] != '\0'; end++) {
            for (int i = start; i <= end; i++)
                putchar(text[i]);
            putchar('\n');
        }
    }
    return 0;
}
