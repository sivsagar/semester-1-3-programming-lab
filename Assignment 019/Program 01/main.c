#include <stdio.h>

struct Book {
    char author[50];
    char title[50];
    float price;
};

int main() {
    struct Book books[3];
    int i, maxIndex = 0;

    
    for (i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    
    for (i = 1; i < 3; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }

    
    printf("\nThe most expensive book is:\n");
    printf("Author: %s\n", books[maxIndex].author);
    printf("Title: %s\n", books[maxIndex].title);
    printf("Price: %.2f\n", books[maxIndex].price);

    return 0;
}


/*------------------OUTPUT---------------------
Enter details for book 1:
Author: 1
Title: 1
Price: 500
Enter details for book 2:
Author: 2
Title: 2
Price: 600
Enter details for book 3:
Author: 3
Title: 3
Price: 70

The most expensive book is:
Author: 2
Title: 2
Price: 600.00*/