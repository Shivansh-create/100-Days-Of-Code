#include <stdio.h>

int main(void) {
    int n, arr[1000];
    long long total = 0, left = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int answer = -1;
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            answer = i;
            break;
        }
        left += arr[i];
    }

    printf("%d\n", answer);
    return 0;
}
