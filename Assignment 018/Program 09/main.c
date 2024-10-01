/* Write a program in C where a function is defined
which takes 3 integers as input and prints the 
average of the 3 integers*/
#include <stdio.h>

void print_average(int a, int b, int c) {
    float average = (a + b + c) / 3.0;
    printf("The average is: %.2f\n", average);
}

int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    print_average(num1, num2, num3);
    return 0;
}

/*OUTPUT 
Enter three integers: 2 4 6
The average is: 4.00
*/