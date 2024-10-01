/*Write a Program in c to define a function that coverts the given temperature in
celcius to farenheit. Call the function and convert the temperature 100
100 degree celcius to farenheit*/
#include <stdio.h>

float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c = 100;
    float f = celsiusToFahrenheit(c);
    printf("%.2f degree Celsius is %.2f degree Fahrenheit\n", c, f);
    return 0;
}

/*--------------------OUTPUT--------------------
   100.00 degree Celsius is 212.00 degree Fahrenheit
*/