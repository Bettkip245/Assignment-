#include <stdio.h>


struct employee {
    char name[25];       
    int id;              
    char department[20]; 
    float salary;        
    char email[50];      
};

int main() {
    
    struct employee employee = {
      name:  "John Doe",            
      id:  12345,                  
      department : "Human Resources",      
      salary: 55000.50,               
      email:  "john.doe@company.com"  
    };

    printf("Employee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("ID: %d\n", employee.id);
    printf("Department: %s\n", employee.department);
    printf("Salary: %.2f\n", employee.salary);
    printf("Email: %s\n", employee.email);

    return 0;
}
