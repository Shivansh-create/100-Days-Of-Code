#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    int age;
    if (!fgets(name, sizeof(name), stdin)) return 1;
    name[strcspn(name, "\r\n")] = '\0';
    if (scanf("%d", &age) != 1) return 1;

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        perror("info.txt");
        return 1;
    }
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    if (fclose(file) != 0) {
        perror("info.txt");
        return 1;
    }

    printf("Data saved successfully.\n");
    return 0;
}
