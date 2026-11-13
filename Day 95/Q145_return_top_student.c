#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student top_student(struct Student students[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++)
        if (students[i].marks > students[top].marks) top = i;
    return students[top];
}

int main(void) {
    int n;
    struct Student students[100];
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3)
            return 1;
    }

    struct Student top = top_student(students, n);
    printf("%s %d %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
