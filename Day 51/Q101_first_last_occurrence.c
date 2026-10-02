#include <stdio.h>

int first_index(int arr[], int n, int target) {
    int low = 0, high = n - 1, answer = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target) {
            if (arr[mid] == target) answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return answer;
}

int last_index(int arr[], int n, int target) {
    int low = 0, high = n - 1, answer = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            if (arr[mid] == target) answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return answer;
}

int main(void) {
    int n, arr[1000], target;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);

    int first = first_index(arr, n, target);
    int last = last_index(arr, n, target);
    if (first == -1)
        printf("-1 -1\n");
    else
        printf("%d %d\n", first, last);
    return 0;
}
