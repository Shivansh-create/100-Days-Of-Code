#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k <= 0 || k > n) return 1;
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];
    long long maximum = sum;
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if (sum > maximum) maximum = sum;
    }

    printf("%lld\n", maximum);
    return 0;
}
