#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[300], *words[50];
    int count = 0;

    if (!fgets(name, sizeof(name), stdin)) return 1;
    char *word = strtok(name, " \t\r\n");
    while (word != NULL && count < 50) {
        words[count++] = word;
        word = strtok(NULL, " \t\r\n");
    }

    if (count == 0) return 0;
    for (int i = 0; i < count - 1; i++)
        printf("%c. ", (char)toupper((unsigned char)words[i][0]));
    printf("%s\n", words[count - 1]);
    return 0;
}
