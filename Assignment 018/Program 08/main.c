  /*Write a program in C where a function is defined
which takes two positive integers as input and
returns the LCM of the two given integers. If the
previous function (of Question 7) is already 
defined, is there a shortcut you can use to define
a function to compute the LCM that calls the 
previous function inside the definition?*/ 
#include <stdio.h>

// Function to compute the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute the LCM of two numbers using the GCD function
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));
    return 0;
}

/*OUTPUT
Enter two positive integers: 2 4
LCM of 2 and 4 is 4
*/