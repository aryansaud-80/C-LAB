// Write a c program to accept details of 'n' employees(e-no,e-name,salary) and display the details of employees having the highest salary. Use an array of structure

#include<stdio.h>

struct employees{
    int employeeNO;
    char employeeName[100];
    int salary;
};


int main(){
int n;
printf("Enter the total number of employees: ");
scanf("%d",&n);

struct employees employeeDetail[100];

printf("Enter the details of employee: \n");
for(int i=0; i<n; i++){
    printf("Enter the Employee no of employee %d: ",i+1);
    scanf(" %d",&employeeDetail[i].employeeNO);

    printf("Enter the name of employee %d: ",i+1);
    scanf(" %s",employeeDetail[i].employeeName);

    printf("Enter the salary of employee %d: ",i+1);
    scanf(" %d",&employeeDetail[i].salary);

    printf("\n");
}

int maxSalary=employeeDetail[0].salary;

for(int i=0; i<n; i++){
    if(employeeDetail[i].salary>maxSalary){
        maxSalary=employeeDetail[i].salary;
    }
}

printf("The detail of employee having highest salary are: ");
for(int i=0; i<n; i++){
    if(employeeDetail[i].salary==maxSalary){
        printf("\n EmpNo=%d\n EmpName=%s\n salary=%d\n",employeeDetail[i].employeeNO,employeeDetail[i].employeeName,employeeDetail[i].salary);
    }
}

return 0;
}


