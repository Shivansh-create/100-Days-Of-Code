#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main(void) {
    int result;
    scanf("%d", &result);

    switch (result) {
        case SUCCESS: printf("Operation successful.\n"); break;
        case FAILURE: printf("Operation failed.\n"); break;
        case TIMEOUT: printf("Operation timed out.\n"); break;
        default: printf("Unknown status.\n");
    }
    return 0;
}
