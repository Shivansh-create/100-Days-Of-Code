#include <stdio.h>

int main(void) {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("numbers.txt");
        return 1;
    }

    long long sum = 0;
    int value, count = 0;
    while (fscanf(file, "%d", &value) == 1) {
        sum += value;
        count++;
    }
    if (ferror(file)) {
        perror("numbers.txt");
        fclose(file);
        return 1;
    }
    fclose(file);

    if (count == 0) {
        printf("No integers found.\n");
        return 0;
    }
    printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum / count);
    return 0;
}
