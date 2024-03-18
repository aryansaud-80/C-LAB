/* Write a menu driven program in c to create a structure employee having fields empid, empname, salary. Accept the details of 'n' Employees from the user and perform the following operation using function.
-Search by Emp-id 
-Display All
-Display Names of Employees having salary>10000.*/


#include<stdio.h>
#include<stdlib.h>

#define max_employee 100

struct employee{
    int empid;
    char empname[max_employee];
    int salary;
};

void searchByEmp_id(struct employee emp[],int n, int empid);
void displayDetailOfAllEmployee(struct employee emp[], int n);
void employeeName(struct employee emp[],int n);

int main(){
    int n;
    printf("Enter the total number of Employee: ");
    scanf("%d",&n);

    struct employee emp[max_employee];
    printf("Enter the details of %d employee: \n",n);
    for(int i=0; i<n; i++){
        printf("Enter employee id: ");
        scanf(" %d",&emp[i].empid);

        printf("Enter employee name: ");
        scanf(" %s",emp[i].empname);

        printf("Enter employee salary: ");
        scanf(" %d",&emp[i].salary);

        printf("\n");
    }

    displayDetailOfAllEmployee(emp,n);
    employeeName(emp,n);

    int choice,empid;

    while(1){
        printf("\nMenu: \n");
        printf("Enter 1 to search employee by ID\n");
        printf("Enter 2 to exit\n");
        printf("Enter your choice: ");
        scanf(" %d",&choice);
        printf("\n");

        switch(choice) {
            case 1:
                printf("Enter the employee id: ");
                scanf("%d",&empid);
                searchByEmp_id(emp,n,empid);
                break;

            case 2:
                exit (0);

            default:
                printf("Enter the valid choice!");
        }
    }


    return 0;
}


void searchByEmp_id(struct employee emp[],int n, int empid){
    int found =0;
    for (int i=0; i<n; i++){
        if(emp[i].empid == empid){
            printf("Employee found!:\n");
            printf("ID: %d\nName: %s\nSalary: %d\n",emp[i].empid,emp[i].empname,emp[i].salary);
            found =1;
            break;
        }
    }

        if(!found){
            printf("The given employee ID does not match with the data!\n");
        }
}


void displayDetailOfAllEmployee(struct employee emp[], int n){
    printf("The details of all employee are: \n");
    for(int i=0; i<n; i++){
        printf("ID: %d\nName: %s\nSalary: %d\n",emp[i].empid,emp[i].empname,emp[i].salary);
        printf("\n");
    }
}


void employeeName(struct employee emp[],int n){
    printf("The name of employee having salary more than 10000 are: \n");
    int greaterSalary=0;
    for(int i=0; i<n; i++){
        if(emp[i].salary>10000){
            printf("\nName: %s\n",emp[i].empname);
            greaterSalary =1;
        }
    }

    if(greaterSalary==0){
        printf("There are no employee having salary more than 10000!\n");
    }
}



