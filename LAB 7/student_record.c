// Write a  C program to read the name and marks of a number of students from and store them in a file. If the file previously exists, add the information to the file

#include <stdio.h>

int main() {
    int numStudents, i;
    char filename[] = "student_records.txt";
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    FILE *file = fopen(filename, "a");
    
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
