#include <stdio.h>
#include <math.h>
/* To find the roots of a quadratic equation ax^2 + bx + c = 0 */

int main() {
    double a, b, c, discriminant, root1, root2, RealPart, ImagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        RealPart = -b / (2 * a);
        ImagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", RealPart, ImagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", RealPart, ImagPart);
    }
    return 0;
}

/*-------------OUTPUT-------------
*/