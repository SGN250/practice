#include <stdio.h>

#define NUM_STUDENTS 10 // Update the number of students to 10

int main() {
    char names[NUM_STUDENTS][50]; // Array to store names of 10 students
    int marks[NUM_STUDENTS];       // Array to store marks of 10 students

    // Input student names and marks
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        // Remove newline character if present
        names[i][strcspn(names[i], "\n")] = 0;

        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
        getchar(); // to consume the newline character left by scanf
    }

    // Output student names and marks
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s, Marks: %d\n", i + 1, names[i], marks[i]);
    }

    return 0;
}

