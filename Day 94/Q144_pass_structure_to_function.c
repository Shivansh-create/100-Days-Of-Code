#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void print_student(struct Student student) {
    printf("Name: %s\nRoll number: %d\nMarks: %.2f\n",
           student.name, student.roll_no, student.marks);
}

int main(void) {
    struct Student student;
    if (scanf("%49s %d %f", student.name, &student.roll_no,
              &student.marks) != 3)
        return 1;
    print_student(student);
    return 0;
}
