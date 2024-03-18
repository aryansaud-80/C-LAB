// Write a C program to accept the details of employees and display them using structure.Details consist of Employee ID,Name,Designation, Department, Salary.


#include <stdio.h>

  struct employee{
  int id;
  char name[20];
  char designation[20];
  char department[20];
  int salary;
} employee[100];

int main(){
  int num_employee;
  printf("Enter the total number of employees: ");
  scanf(" %d",&num_employee);

  for (int i = 0; i < num_employee; i++){
    printf("Enter the employee ID: ");
    scanf("%d", &employee[i].id);
    printf("Enter the employee name: ");
    scanf("%s", employee[i].name);
    printf("Enter the employee designation: ");
    scanf("%s", employee[i].designation);
    printf("Enter the employee department: ");
    scanf("%s", employee[i].department);
    printf("Enter the employee salary: ");
    scanf("%d", &employee[i].salary);
    printf("\n");
  }

  printf("\n");

  for (int i = 0; i < num_employee; i++)
  {
    printf("The employee details are:\n");
    printf("ID: %d\n", employee[i].id);
    printf("Name: %s\n", employee[i].name);
    printf("Designation: %s\n", employee[i].designation);
    printf("Department: %s\n", employee[i].department);
    printf("Salary: %d\n", employee[i].salary);
    printf("\n");
}

  return 0;
}