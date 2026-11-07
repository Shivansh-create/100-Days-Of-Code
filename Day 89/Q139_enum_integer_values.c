#include <stdio.h>

enum Result { PASS = 1, RETAKE = 4, FAIL = 8 };

int main(void) {
    enum Result results[] = {PASS, RETAKE, FAIL};
    for (int i = 0; i < 3; i++)
        printf("%d\n", results[i]);
    return 0;
}
