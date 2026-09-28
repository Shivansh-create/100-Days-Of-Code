#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[500], longest[500] = "";
    if (!fgets(sentence, sizeof(sentence), stdin)) return 1;

    char *word = strtok(sentence, " \t\r\n");
    while (word != NULL) {
        if (strlen(word) > strlen(longest))
            strcpy(longest, word);
        word = strtok(NULL, " \t\r\n");
    }

    printf("%s\n", longest);
    return 0;
}
