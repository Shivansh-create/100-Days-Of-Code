#include <stdio.h>

int main(void) {
    int m, n, first[1000], second[1000], merged[2000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &first[i]);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &second[i]);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
        merged[k++] = first[i] <= second[j] ? first[i++] : second[j++];
    while (i < m) merged[k++] = first[i++];
    while (j < n) merged[k++] = second[j++];

    for (int p = 0; p < k; p++)
        printf("%d%s", merged[p], p == k - 1 ? "\n" : " ");
    return 0;
}
