#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid traffic light\n");
    }
    return 0;
}
