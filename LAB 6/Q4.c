// WAP that reads names and addresses of different students and rearranges them on the basis of name in alphabetic order.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    char address[100];
};

void swap(struct Student *a, struct Student *b) {
    struct Student temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_students(struct Student students[], int num_students) {
    int i, j;
    for (i = 0; i < num_students - 1; i++) {
        for (j = 0; j < num_students - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    struct Student students[100];
    int num_students, i;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (i = 0; i < num_students; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter address of student %d: ", i + 1);
        scanf("%s", students[i].address);
    }

    sort_students(students, num_students);

    printf("\nStudents sorted by name:\n");
    for (i = 0; i < num_students; i++) {
        printf("Name: %s, Address: %s\n", students[i].name, students[i].address);
    }

    return 0;
}

