#include <stdio.h>

int main(void) {
    long long n;
    scanf("%lld", &n);

    long long low = 1, high = n, answer = -1;
    long long total = n * (n + 1) / 2;
    while (low <= high) {
        long long x = low + (high - low) / 2;
        long long left = x * (x + 1) / 2;
        long long right = total - (x - 1) * x / 2;
        if (left == right) {
            answer = x;
            break;
        } else if (left < right) {
            low = x + 1;
        } else {
            high = x - 1;
        }
    }

    printf("%lld\n", answer);
    return 0;
}
