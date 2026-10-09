#include <stdio.h>

int main(void) {
    int n, arr[1000];
    long long answer[1000], suffix = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    long long prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= arr[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= arr[i];
    }

    for (int i = 0; i < n; i++)
        printf("%lld%s", answer[i], i == n - 1 ? "\n" : " ");
    return 0;
}
