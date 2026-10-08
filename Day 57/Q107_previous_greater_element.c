#include <stdio.h>

int main(void) {
    int n, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int previous = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous = arr[j];
                break;
            }
        }
        printf("%d%s", previous, i == n - 1 ? "\n" : ", ");
    }
    return 0;
}
