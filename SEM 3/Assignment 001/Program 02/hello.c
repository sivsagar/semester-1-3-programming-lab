#include <stdio.h>
#include <math.h>
/* To find the roots of a quadratic equation ax^2 + bx + c = 0 */

int main() {
    double a, b, c, d;
    printf("Enter a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d >= 0)
        printf("Roots: %.2lf, %.2lf\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else
        printf("Roots: %.2lf+%.2lfi, %.2lf-%.2lfi\n", -b/(2*a), sqrt(-d)/(2*a), -b/(2*a), sqrt(-d)/(2*a));
    return 0;
}

/*-------------OUTPUT-------------
*/