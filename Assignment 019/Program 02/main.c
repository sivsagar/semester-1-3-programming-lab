#include <stdio.h>
#include <string.h>

#define MAX_CARS 4
#define MAX_NAME_LENGTH 50


typedef struct {
    char company[MAX_NAME_LENGTH];
    char model[MAX_NAME_LENGTH];
    float price;
} Car;

int main() {
    Car cars[MAX_CARS];
    int i, minIndex = 0;

   
    for (i = 0; i < MAX_CARS; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Company: ");
        scanf("%s", cars[i].company);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Price: ");
        scanf("%f", &cars[i].price);
    }

    
    for (i = 1; i < MAX_CARS; i++) {
        if (cars[i].price < cars[minIndex].price) {
            minIndex = i;
        }
    }

    
    printf("\nCar with the lowest price:\n");
    printf("Company: %s\n", cars[minIndex].company);
    printf("Model: %s\n", cars[minIndex].model);
    printf("Price: %.2f\n", cars[minIndex].price);

    return 0;
}

/*---------outpu------------

Enter details for car 1:
Company: Suzuki
Model: Brezza
Price: 1500000
Enter details for car 2:
Company: Tata
Model: Harrier
Price: 1900000
Enter details for car 3:
Company: Hyundai
Model: Creata
Price: 1800000
Enter details for car 4:
Company: Skoada
Model: Salavia
Price:     1200000

Car with the lowest price:
Company: Skoada
Model: Salavia
Price: 200000.00*/