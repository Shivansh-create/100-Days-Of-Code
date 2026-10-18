#include <stdio.h>

int main(void) {
    int n, value, missing;
    scanf("%d", &n);
    missing = n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        missing ^= i ^ value;
    }
    printf("%d\n", missing);
    return 0;
}
