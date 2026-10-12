#include <stdio.h>

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k <= 0 || k > n) return 1;
    for (int i = 0; i <= n - k; i++) {
        int first_negative = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }
        printf("%d%s", first_negative, i == n - k ? "\n" : " ");
    }
    return 0;
}
