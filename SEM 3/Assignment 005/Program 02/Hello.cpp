/* Create overloaded functions to perform mathematical operations such as add, subtract, multiply, divide, that work with integers, floats.*/

#include <iostream>
#include <iomanip>

using namespace std;

// Addition functions - overloaded for different types
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b, float c) {
    return a + b + c;
}

// Subtraction functions - overloaded for different types
int subtract(int a, int b) {
    return a - b;
}

float subtract(float a, float b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

// Multiplication functions - overloaded for different types
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

float multiply(float a, float b, float c) {
    return a * b * c;
}

// Division functions - overloaded for different types
float divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0.0f;
    }
    return (float)a / b;
}

float divide(float a, float b) {
    if (b == 0.0f) {
        cout << "Error: Division by zero!" << endl;
        return 0.0f;
    }
    return a / b;
}

double divide(double a, double b) {
    if (b == 0.0) {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    cout << "=== Mathematical Operations with Overloaded Functions ===" << endl;
    cout << fixed << setprecision(2);
    
    // Testing addition functions
    cout << "\n1. Addition Operations:" << endl;
    cout << "add(5, 3) = " << add(5, 3) << " (int + int)" << endl;
    cout << "add(5.5f, 3.2f) = " << add(5.5f, 3.2f) << " (float + float)" << endl;
    cout << "add(7.25, 2.75) = " << add(7.25, 2.75) << " (double + double)" << endl;
    cout << "add(1, 2, 3) = " << add(1, 2, 3) << " (three integers)" << endl;
    cout << "add(1.1f, 2.2f, 3.3f) = " << add(1.1f, 2.2f, 3.3f) << " (three floats)" << endl;
    
    // Testing subtraction functions
    cout << "\n2. Subtraction Operations:" << endl;
    cout << "subtract(10, 4) = " << subtract(10, 4) << " (int - int)" << endl;
    cout << "subtract(15.8f, 7.3f) = " << subtract(15.8f, 7.3f) << " (float - float)" << endl;
    cout << "subtract(20.75, 8.25) = " << subtract(20.75, 8.25) << " (double - double)" << endl;
    
    // Testing multiplication functions
    cout << "\n3. Multiplication Operations:" << endl;
    cout << "multiply(6, 7) = " << multiply(6, 7) << " (int * int)" << endl;
    cout << "multiply(4.5f, 2.0f) = " << multiply(4.5f, 2.0f) << " (float * float)" << endl;
    cout << "multiply(3.14, 2.0) = " << multiply(3.14, 2.0) << " (double * double)" << endl;
    cout << "multiply(2, 3, 4) = " << multiply(2, 3, 4) << " (three integers)" << endl;
    cout << "multiply(1.5f, 2.0f, 3.0f) = " << multiply(1.5f, 2.0f, 3.0f) << " (three floats)" << endl;
    
    // Testing division functions
    cout << "\n4. Division Operations:" << endl;
    cout << "divide(15, 3) = " << divide(15, 3) << " (int / int)" << endl;
    cout << "divide(22, 7) = " << divide(22, 7) << " (int / int with decimal result)" << endl;
    cout << "divide(15.6f, 3.0f) = " << divide(15.6f, 3.0f) << " (float / float)" << endl;
    cout << "divide(22.7, 3.14) = " << divide(22.7, 3.14) << " (double / double)" << endl;
    
    // Testing division by zero
    cout << "\n5. Division by Zero Testing:" << endl;
    cout << "divide(10, 0) = " << divide(10, 0) << " (division by zero)" << endl;
    cout << "divide(10.5f, 0.0f) = " << divide(10.5f, 0.0f) << " (float division by zero)" << endl;
    
    // Mixed operations demonstration
    cout << "\n6. Mixed Operations Example:" << endl;
    int x = 12, y = 5;
    float a = 8.5f, b = 2.5f;
    double p = 15.75, q = 3.25;
    
    cout << "x = " << x << ", y = " << y << endl;
    cout << "a = " << a << "f, b = " << b << "f" << endl;
    cout << "p = " << p << ", q = " << q << endl;
    
    cout << "Result of (x + y) * a / b = " << divide(multiply((float)add(x, y), a), b) << endl;
    cout << "Result of p - (a * b) = " << subtract(p, (double)multiply(a, b)) << endl;
    
    return 0;
}


/*OUTPUT
=== Mathematical Operations with Overloaded Functions ===

1. Addition Operations:
add(5, 3) = 8 (int + int)
add(5.5f, 3.2f) = 8.70 (float + float)
add(7.25, 2.75) = 10.00 (double + double)
add(1, 2, 3) = 6 (three integers)
add(1.1f, 2.2f, 3.3f) = 6.60 (three floats)

2. Subtraction Operations:
subtract(10, 4) = 6 (int - int)
subtract(15.8f, 7.3f) = 8.50 (float - float)
subtract(20.75, 8.25) = 12.50 (double - double)

3. Multiplication Operations:
multiply(6, 7) = 42 (int * int)
multiply(4.5f, 2.0f) = 9.00 (float * float)
multiply(3.14, 2.0) = 6.28 (double * double)
multiply(2, 3, 4) = 24 (three integers)
multiply(1.5f, 2.0f, 3.0f) = 9.00 (three floats)

4. Division Operations:
divide(15, 3) = 5.00 (int / int)
divide(22, 7) = 3.14 (int / int with decimal result)
divide(15.6f, 3.0f) = 5.20 (float / float)
divide(22.7, 3.14) = 7.23 (double / double)

5. Division by Zero Testing:
divide(10, 0) = Error: Division by zero!
0.00 (division by zero)
divide(10.5f, 0.0f) = Error: Division by zero!
0.00 (float division by zero)

6. Mixed Operations Example:
x = 12, y = 5
a = 8.50f, b = 2.50f
p = 15.75, q = 3.25
Result of (x + y) * a / b = 57.80
Result of p - (a * b) = -5.50*/