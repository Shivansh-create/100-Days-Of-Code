#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW };

int main(void) {
    enum Color colors[] = {RED, GREEN, BLUE, YELLOW};
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = 0; i < 4; i++)
        printf("%s = %d\n", names[i], colors[i]);
    return 0;
}
