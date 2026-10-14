#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b) {
    int first = *(const int *)a;
    int second = *(const int *)b;
    return (first > second) - (first < second);
}

int main(void) {
    int n, k, arr[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k < 1 || k > n) return 1;
    qsort(arr, n, sizeof(arr[0]), compare_ints);
    printf("%d\n", arr[k - 1]);
    return 0;
}
