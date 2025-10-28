/*Create a class Rectangle with private member variables length (double) and width (double). Implement:
 A default constructor that initializes both length and width to 0.0.
 A parameterized constructor that takes one argument (double side) and initializes both length and width to side (for a square).
 Another parameterized constructor that takes two arguments (double l, double w) and initializes length to l and width to w.
 A calculateArea() method to return the area of the rectangle.
 In main(), create Rectangle objects using each of the three constructors and print their areas.

 Sample output:
 Area of rectangle1: 0
 Area of rectangle2: 25
 Area of rectangle3: 7
*/

#include <iostream>

class Rectangle {
private:
	double length;
	double width;
public:
	// Default constructor
	Rectangle() : length(0.0), width(0.0) {}

	// Parameterized constructor (square)
	Rectangle(double side) : length(side), width(side) {}

	// Parameterized constructor (rectangle)
	Rectangle(double l, double w) : length(l), width(w) {}

	// Calculate area
	double calculateArea() const {
		return length * width;
	}
};

int main() {
	// Using default constructor
	Rectangle r1;

	// Using one-argument constructor (square)
	Rectangle r2(5.0);

	// Using two-argument constructor
	Rectangle r3(3.5, 2.0);

	std::cout << "Area of rectangle1: " << r1.calculateArea() << std::endl;
	std::cout << "Area of rectangle2: " << r2.calculateArea() << std::endl;
	std::cout << "Area of rectangle3: " << r3.calculateArea() << std::endl;

	return 0;
}
