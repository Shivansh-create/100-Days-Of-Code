#include <stdio.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    int count[26] = {0};
    if (!fgets(first, sizeof(first), stdin) ||
        !fgets(second, sizeof(second), stdin))
        return 1;

    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';
    for (int i = 0; first[i] != '\0'; i++) {
        if (first[i] < 'a' || first[i] > 'z') return 1;
        count[first[i] - 'a']++;
    }
    for (int i = 0; second[i] != '\0'; i++) {
        if (second[i] < 'a' || second[i] > 'z') return 1;
        count[second[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
