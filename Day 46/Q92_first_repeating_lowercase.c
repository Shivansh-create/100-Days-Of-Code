#include <stdio.h>

int main(void) {
    char text[500];
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] < 'a' || text[i] > 'z') continue;
        for (int j = i + 1; text[j] != '\0'; j++) {
            if (text[i] == text[j]) {
                printf("%c\n", text[i]);
                return 0;
            }
        }
    }

    printf("-1\n");
    return 0;
}
