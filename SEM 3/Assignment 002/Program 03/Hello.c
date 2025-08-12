/*
Write a program where a function updates the salary of an employee using a pointer to structure.
*/
#include <stdio.h>

// Structure to store employee details
struct Employee
{
    char name[50];
    float salary;
};

// Function to update salary using pointer to structure
void updateSalary(struct Employee *emp, float newSalary)
{
    emp->salary = newSalary;
}

int main()
{
    struct Employee emp1;

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp1.name);
    printf("Enter current salary: ");
    scanf("%f", &emp1.salary);

    // Display before update
    printf("\nBefore update:\n");
    printf("Name: %s, Salary: %.2f\n", emp1.name, emp1.salary);

    // Update salary
    float newSalary;
    printf("\nEnter new salary: ");
    scanf("%f", &newSalary);
    updateSalary(&emp1, newSalary);

    // Display after update
    printf("\nAfter update:\n");
    printf("Name: %s, Salary: %.2f\n", emp1.name, emp1.salary);

    return 0;
}

/*--------------OUTPUT----------------
Enter employee name: John
Enter current salary: 45000

Before update:
Name: John, Salary: 45000.00

Enter new salary: 50000

After update:
Name: John, Salary: 50000.00

*/