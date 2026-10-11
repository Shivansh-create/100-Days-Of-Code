#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k <= 0 || k > n) return 1;
    for (int i = 0; i <= n - k; i++) {
        int maximum = arr[i];
        for (int j = i + 1; j < i + k; j++)
            if (arr[j] > maximum) maximum = arr[j];
        printf("%d%s", maximum, i == n - k ? "\n" : " ");
    }
    return 0;
}
