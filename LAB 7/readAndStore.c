// Write a c program to read the name and marks of a number of students and store them in a file.

#include <stdio.h>

int main() {
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    FILE *file = fopen("student_records.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }
    
    for (i = 0; i < numStudents; i++) {
        char name[50];
        float marks;
        
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", name);
        
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &marks);

        fprintf(file, "%s %.2f\n", name, marks);
    }


    fclose(file);
    
    printf("\nData written to file successfully!\n");
    
    return 0;
}
