#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main(void) {
    int choice;
    double first, second;
    scanf("%d %lf %lf", &choice, &first, &second);

    switch (choice) {
        case ADD: printf("%.2f\n", first + second); break;
        case SUBTRACT: printf("%.2f\n", first - second); break;
        case MULTIPLY: printf("%.2f\n", first * second); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
