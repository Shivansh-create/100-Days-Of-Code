#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, found = 0;
    scanf("%d", &n);
    if (n <= 0) return 1;

    size_t capacity = 1;
    while (capacity < (size_t)n * 4) capacity *= 2;
    int *keys = malloc(capacity * sizeof(*keys));
    unsigned char *used = calloc(capacity, sizeof(*used));
    if (keys == NULL || used == NULL) {
        free(keys);
        free(used);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        size_t slot = ((unsigned int)value * 2654435761u) & (capacity - 1);
        while (used[slot] && keys[slot] != value)
            slot = (slot + 1) & (capacity - 1);
        if (used[slot]) {
            found = value;
            break;
        }
        used[slot] = 1;
        keys[slot] = value;
    }

    printf("%d\n", found);
    free(keys);
    free(used);
    return 0;
}
