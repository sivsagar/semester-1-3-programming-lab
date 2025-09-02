/*Create overloaded functions to calculate area and perimeter for different geometric shapes such as circle, rectangle, triangle using different parameter combinations.*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

// AREA FUNCTIONS - Overloaded for different shapes

// Circle area (using radius)
double area(double radius) {
    return PI * radius * radius;
}

// Rectangle area (using length and width)
double area(double length, double width) {
    return length * width;
}

// Triangle area (using base and height)
double area(double base, double height, char shape) {
    if (shape == 'T' || shape == 't') {
        return 0.5 * base * height;
    }
    return 0;
}

// Triangle area (using three sides - Heron's formula)
double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;  // semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// PERIMETER FUNCTIONS - Overloaded for different shapes

// Circle perimeter/circumference (using radius)
double perimeter(double radius) {
    return 2 * PI * radius;
}

// Rectangle perimeter (using length and width)
double perimeter(double length, double width) {
    return 2 * (length + width);
}

// Triangle perimeter (using three sides)
double perimeter(double a, double b, double c) {
    return a + b + c;
}

// Square perimeter and area (using side)
double squareArea(double side) {
    return side * side;
}

double squarePerimeter(double side) {
    return 4 * side;
}

int main() {
    cout << "=== Geometric Shapes: Area and Perimeter Calculator ===" << endl;
    cout << fixed << setprecision(2);
    
    // CIRCLE CALCULATIONS
    cout << "\n1. CIRCLE CALCULATIONS:" << endl;
    double radius = 5.0;
    cout << "Circle with radius = " << radius << endl;
    cout << "Area = " << area(radius) << " square units" << endl;
    cout << "Circumference = " << perimeter(radius) << " units" << endl;
    
    // RECTANGLE CALCULATIONS
    cout << "\n2. RECTANGLE CALCULATIONS:" << endl;
    double length = 8.0, width = 6.0;
    cout << "Rectangle with length = " << length << ", width = " << width << endl;
    cout << "Area = " << area(length, width) << " square units" << endl;
    cout << "Perimeter = " << perimeter(length, width) << " units" << endl;
    
    // TRIANGLE CALCULATIONS (Base and Height)
    cout << "\n3. TRIANGLE CALCULATIONS (Base & Height):" << endl;
    double base = 10.0, height = 7.0;
    cout << "Triangle with base = " << base << ", height = " << height << endl;
    cout << "Area = " << area(base, height, 'T') << " square units" << endl;
    
    // TRIANGLE CALCULATIONS (Three Sides)
    cout << "\n4. TRIANGLE CALCULATIONS (Three Sides):" << endl;
    double side1 = 3.0, side2 = 4.0, side3 = 5.0;
    cout << "Triangle with sides = " << side1 << ", " << side2 << ", " << side3 << endl;
    cout << "Area (Heron's formula) = " << area(side1, side2, side3) << " square units" << endl;
    cout << "Perimeter = " << perimeter(side1, side2, side3) << " units" << endl;
    
    // SQUARE CALCULATIONS
    cout << "\n5. SQUARE CALCULATIONS:" << endl;
    double side = 4.0;
    cout << "Square with side = " << side << endl;
    cout << "Area = " << squareArea(side) << " square units" << endl;
    cout << "Perimeter = " << squarePerimeter(side) << " units" << endl;
    
    // MIXED EXAMPLES
    cout << "\n6. ADDITIONAL EXAMPLES:" << endl;
    
    // Different sized circle
    double r2 = 3.5;
    cout << "Circle (r=" << r2 << "): Area = " << area(r2) << ", Circumference = " << perimeter(r2) << endl;
    
    // Different rectangle
    double l2 = 12.5, w2 = 8.3;
    cout << "Rectangle (" << l2 << "x" << w2 << "): Area = " << area(l2, w2) << ", Perimeter = " << perimeter(l2, w2) << endl;
    
    // Different triangle
    double t1 = 6.0, t2 = 8.0, t3 = 10.0;
    cout << "Triangle (sides " << t1 << "," << t2 << "," << t3 << "): Area = " << area(t1, t2, t3) << ", Perimeter = " << perimeter(t1, t2, t3) << endl;
    
    // Triangle with base and height
    double b2 = 15.0, h2 = 9.0;
    cout << "Triangle (base=" << b2 << ", height=" << h2 << "): Area = " << area(b2, h2, 'T') << endl;
    
    cout << "\n=== Function Overloading Demonstration Complete ===" << endl;
    
    return 0;
}

/*output
=== Geometric Shapes: Area and Perimeter Calculator ===

1. CIRCLE CALCULATIONS:
Circle with radius = 5.00
Area = 78.54 square units
Circumference = 31.42 units

2. RECTANGLE CALCULATIONS:
Rectangle with length = 8.00, width = 6.00
Area = 48.00 square units
Perimeter = 28.00 units

3. TRIANGLE CALCULATIONS (Base & Height):
Triangle with base = 10.00, height = 7.00
Area = 35.00 square units

4. TRIANGLE CALCULATIONS (Three Sides):
Triangle with sides = 3.00, 4.00, 5.00
Area (Heron's formula) = 6.00 square units
Perimeter = 12.00 units

5. SQUARE CALCULATIONS:
Square with side = 4.00
Area = 16.00 square units
Perimeter = 16.00 units

6. ADDITIONAL EXAMPLES:
Circle (r=3.50): Area = 38.48, Circumference = 21.99
Rectangle (12.50x8.30): Area = 103.75, Perimeter = 41.60
Triangle (sides 6.00,8.00,10.00): Area = 24.00, Perimeter = 24.00
Triangle (base=15.00, height=9.00): Area = 67.50

=== Function Overloading Demonstration Complete ===*/