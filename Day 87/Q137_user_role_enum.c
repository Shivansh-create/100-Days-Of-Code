#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main(void) {
    int role;
    scanf("%d", &role);

    switch (role) {
        case ADMIN: printf("Administrator access granted.\n"); break;
        case USER: printf("User access granted.\n"); break;
        case GUEST: printf("Guest access granted.\n"); break;
        default: printf("Invalid role.\n");
    }
    return 0;
}
