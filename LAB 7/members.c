// C program to write all the members of an array of structures to a file using fwrite(). Read the array from the file and display it on the screen

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[MAX_SIZE];
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    FILE *file = fopen("student_data.bin", "wb");

    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fwrite(students, sizeof(struct Student), numStudents, file);

    fclose(file);

    printf("Data written to file successfully!\n");

    file = fopen("student_data.bin", "rb");

    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    struct Student studentsFromFile[MAX_SIZE];

    fread(studentsFromFile, sizeof(struct Student), numStudents, file);

    fclose(file);

    printf("\nStudents Read from File:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", studentsFromFile[i].name, studentsFromFile[i].rollNumber, studentsFromFile[i].marks);
    }

    return 0;
}
