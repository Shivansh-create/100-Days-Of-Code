#include <stdio.h>

int main(void) {
    int n, value;
    scanf("%d", &n);
    if (n <= 0) return 1;

    scanf("%d", &value);
    long long current = value, maximum = value;
    for (int i = 1; i < n; i++) {
        scanf("%d", &value);
        current = current + value > value ? current + value : value;
        if (current > maximum) maximum = current;
    }

    printf("%lld\n", maximum);
    return 0;
}
