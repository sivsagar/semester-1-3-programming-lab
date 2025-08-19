/* Write a program to store details of 3 books using an array of structures and a pointer.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to store book Details
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3]; 
    struct Book *ptr;     
    int i;

    ptr = books; /

    // Input book details
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", (ptr + i)->title);
        printf("Author: ");
        scanf("%s", (ptr + i)->author);
        printf("Price: ");
        scanf("%f", &(ptr + i)->price);
    }

    // Display book details
    printf("\n--- Book Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", (ptr + i)->title);
        printf("Author: %s\n", (ptr + i)->author);
        printf("Price: %.2f\n", (ptr + i)->price);
    }

    return 0;
}

/*----------OUTPUT-----------
Enter details of Book 1:
Title: C_Programming
Author: Dennis
Price: 350.50

Enter details of Book 2:
Title: Data_Structures
Author: Sam
Price: 450.75

Enter details of Book 3:
Title: Algorithms
Author: Tom
Price: 500.00

--- Book Details ---
Book 1:
Title: C_Programming
Author: Dennis
Price: 350.50
Book 2:
Title: Data_Structures
Author: Sam
Price: 450.75
Book 3:
Title: Algorithms
Author: Tom
Price: 500.00

*/