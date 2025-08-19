/*1. Student Records Management

    Create a program to store student
    records(name, roll number, marks) in a file.

Provide options to:

Add a new record

Display all records

Search for a student by roll number

Update marks of a student

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void addRecord() {
    struct Student s;
    FILE *fp = fopen("students.dat", "ab");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("Record added successfully!\n");
}

void displayRecords() {
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nAll Student Records:\n");
    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Name: %s\nRoll No: %d\nMarks: %.2f\n\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
}

void searchRecord() {
    int roll;
    int found = 0;
    struct Student s;
    FILE *fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Record Found:\n");
            printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(fp);
}

void updateMarks() {
    int roll;
    float newMarks;
    int found = 0;
    struct Student s;

    FILE *fp = fopen("students.dat", "rb+");

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("Enter roll number to update marks: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("Current marks: %.2f\n", s.marks);
            printf("Enter new marks: ");
            scanf("%f", &newMarks);
            s.marks = newMarks;

            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);

            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n*** Student Records Management ***\n");
        printf("1. Add New Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addRecord(); break;
            case 2: displayRecords(); break;
            case 3: searchRecord(); break;
            case 4: updateMarks(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
/*OUTPUT
*** Student Records Management ***
1. Add New Record
2. Display All Records
3. Search by Roll Number
4. Update Marks
5. Exit
Enter your choice: 1
Enter name: Alice
Enter roll number: 101
Enter marks: 89.5
Record added successfully!

*** Student Records Management ***
Enter your choice: 2

All Student Records:
Name: Alice
Roll No: 101
Marks: 89.50

*** Student Records Management ***
Enter your choice: 3
Enter roll number to search: 101
Record Found:
Name: Alice
Roll No: 101
Marks: 89.50

*** Student Records Management ***
Enter your choice: 4
Enter roll number to update marks: 101
Current marks: 89.50
Enter new marks: 95.0
Marks updated successfully!

*** Student Records Management ***
Enter your choice: 2

All Student Records:
Name: Alice
Roll No: 101
Marks: 95.00
*/