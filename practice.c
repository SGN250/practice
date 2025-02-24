#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];  // Assuming each student has 5 subjects
    float average;
};

void calculate_average(struct Student* student) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += student->marks[i];
    }
    student->average = sum / 5.0;  // Calculate average
}

void input_student_data(struct Student* student) {
    printf("Enter student's name: ");
    scanf("%s", student->name);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student->marks[i]);
    }

    // Calculate average marks
    calculate_average(student);
}

void display_student_data(struct Student student) {
    printf("\nStudent Name: %s\n", student.name);
    printf("Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", student.marks[i]);
    }
    printf("\nAverage Marks: %.2f\n", student.average);
}

int main() {
    struct Student students[5];

    // Input data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter data for student %d:\n", i + 1);
        input_student_data(&students[i]);
    }

    // Display data of all 5 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 5; i++) {
        display_student_data(students[i]);
    }

    return 0;
}
