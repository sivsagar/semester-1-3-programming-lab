/*10. Write a separate program in C where a function 
is defined which takes 3 integers as input and 
returns the average of the 3 integers. Can you
explain the difference between the nature of
the functions in Question 9 and 10, even though
both the functions are computing the same 
average?*/
#include <stdio.h>

// Function to compute the average of three integers
float compute_average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float average = compute_average(num1, num2, num3);
    printf("The average of %d, %d, and %d is: %.2f\n", num1, num2, num3, average);

    return 0;
}

/*OUTPUT
Enter three integers: 2 3 4
The average of 2, 3, and 4 is: 3.00
*/