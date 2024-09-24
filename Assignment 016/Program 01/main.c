/*Write a c program to define and call a function that takes the temperature 
in celsius as input and returns the temperature in farhenheit.
*/

#include<stdio.h>
float getF(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = getF(c);
    printf("Temperature in Fahrenheit: %.2f\n", f);

    return 0;
}