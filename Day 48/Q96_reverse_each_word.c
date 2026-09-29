#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[500];
    if (!fgets(sentence, sizeof(sentence), stdin)) return 1;

    int start = 0;
    for (int i = 0;; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\t' ||
            sentence[i] == '\n' || sentence[i] == '\0') {
            int left = start, right = i - 1;
            while (left < right) {
                char temp = sentence[left];
                sentence[left++] = sentence[right];
                sentence[right--] = temp;
            }
            start = i + 1;
            if (sentence[i] == '\0') break;
        }
    }

    printf("%s", sentence);
    return 0;
}
