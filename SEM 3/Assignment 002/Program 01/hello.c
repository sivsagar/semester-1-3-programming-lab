/*
Write a C program to store and display information about a list of courses, where each course has a subject name and corresponding marks. The number of courses should be taken as input from the user. Dynamically allocate memory for storing the records using malloc. Accept subject name and marks for each record from the user. Display the stored information. Finally, release the allocated memory using free.
*/
#include <stdio.h>
#include <stdlib.h>

// Structure to store course details
struct Course
{
    char subject[50];
    int marks;
};

int main()
{
    struct Course *courses;
    int n, i;

    printf("Enter number of courses: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    courses = (struct Course *)malloc(n * sizeof(struct Course));
    if (courses == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input course details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter subject name for course %d: ", i + 1);
        scanf("%s", courses[i].subject);
        printf("Enter marks for %s: ", courses[i].subject);
        scanf("%d", &courses[i].marks);
    }

    // Display course details
    printf("\n--- Stored Course Information ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Course %d: Subject: %s, Marks: %d\n", i + 1, courses[i].subject, courses[i].marks);
    }

    // Free allocated memory
    free(courses);

    return 0;
}

/*-------------OUTPUT---------------
Enter number of courses: 3

Enter subject name for course 1: Math
Enter marks for Math: 85

Enter subject name for course 2: Physics
Enter marks for Physics: 90

Enter subject name for course 3: Chemistry
Enter marks for Chemistry: 88

--- Stored Course Information ---
Course 1: Subject: Math, Marks: 85
Course 2: Subject: Physics, Marks: 90
Course 3: Subject: Chemistry, Marks: 88

*/