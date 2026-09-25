#include <stdio.h>
int main() {
    char str[100];
    printf("Enter string with spaces: ");
    scanf(" %[^\n]s", str);
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ' ') str[i] = '-';
    }
    printf("Replaced: %s\n", str);
    return 0;
}