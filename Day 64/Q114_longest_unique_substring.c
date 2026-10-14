#include <stdio.h>
#include <string.h>

int main(void) {
    char text[1000];
    int last_seen[256];
    if (!fgets(text, sizeof(text), stdin)) return 1;
    text[strcspn(text, "\r\n")] = '\0';

    for (int i = 0; i < 256; i++) last_seen[i] = -1;
    int start = 0, longest = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (last_seen[ch] >= start) start = last_seen[ch] + 1;
        last_seen[ch] = i;
        if (i - start + 1 > longest) longest = i - start + 1;
    }

    printf("%d\n", longest);
    return 0;
}
