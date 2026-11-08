#include <stdio.h>

enum Gender { FEMALE, MALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main(void) {
    struct Person person;
    int gender;
    scanf("%49s %d", person.name, &gender);
    if (gender < FEMALE || gender > OTHER) return 1;
    person.gender = (enum Gender)gender;

    const char *names[] = {"Female", "Male", "Other"};
    printf("%s: %s\n", person.name, names[person.gender]);
    return 0;
}
