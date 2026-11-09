#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student student;
    if (scanf("%49s %d %f", student.name, &student.roll_no,
              &student.marks) != 3)
        return 1;

    printf("Name: %s\nRoll number: %d\nMarks: %.2f\n",
           student.name, student.roll_no, student.marks);
    return 0;
}
