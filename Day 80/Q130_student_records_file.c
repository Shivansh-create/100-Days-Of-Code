#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main(void) {
    int n;
    struct Student students[100];
    scanf("%d", &n);
    if (n < 1 || n > 100) return 1;

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("students.txt");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_no, &students[i].marks) != 3) {
            fclose(file);
            return 1;
        }
        fprintf(file, "%s %d %.2f\n", students[i].name,
                students[i].roll_no, students[i].marks);
    }
    if (fclose(file) != 0) {
        perror("students.txt");
        return 1;
    }

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("students.txt");
        return 1;
    }
    struct Student student;
    while (fscanf(file, "%49s %d %f", student.name,
                  &student.roll_no, &student.marks) == 3)
        printf("%s %d %.2f\n", student.name, student.roll_no, student.marks);

    if (ferror(file)) {
        perror("students.txt");
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
