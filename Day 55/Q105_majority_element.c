#include <stdio.h>

int main(void) {
    int n, arr[1000], candidate = 0, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }

    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == candidate) count++;

    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
