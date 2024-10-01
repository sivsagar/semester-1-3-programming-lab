/*Write a program in c where a function named circlearea is defined which takes
the radius of a circle as input and returns the area of the circle. call th function 
to compute and print the area of a circle with radius 7.33*/
#include <stdio.h>
#define PI 3.14

double circlearea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius = 7.33;
    double area = circlearea(radius);
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}
  

/*--------------------OUTPUT--------------------
   The area of the circle with radius 7.33 is 168.71
*/