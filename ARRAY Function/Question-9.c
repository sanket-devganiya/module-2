//  WAP to show difference between Structure and Union.  


  #include <stdio.h>
#include <string.h>


struct Employee {

    int id;
    char name[50];
    float salary;

};


union Data {

    int intValue;
    float floatValue;
    char strValue[50];

};

void main() {
    
    struct Employee emp;
    emp.id = 100;
    strcpy(emp.name, "SANKET DEVGANIYA");
    emp.salary = 50000.50;

    
    union Data data;
    data.intValue = 100;

    
    printf("Structure:\n");

    printf("Employee ID: %d\n", emp.id);

    printf("Employee Name: %s\n", emp.name);

    printf("Employee Salary: %.2f\n", emp.salary);

    
    printf("\nUnion:\n");

    printf("Union intValue: %d\n", data.intValue);
    
    data.floatValue = 2261;

    printf("Union floatValue: %.2f\n", data.floatValue);
    
    
    strcpy(data.strValue, "Hello, World!");

    printf("Union strValue: %s\n", data.strValue);

    
    printf("\nUnion after overwriting:\n");

    printf("Union intValue: %d\n", data.intValue);

    printf("Union floatValue: %.2f\n", data.floatValue);

    printf("Union strValue: %s\n", data.strValue);


    
}