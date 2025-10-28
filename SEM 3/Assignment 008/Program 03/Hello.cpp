/*3.  Create a class Point with private member variables x and y (integers). Implement:
 A parameterized constructor that initializes x and y.
 A copy constructor that takes another Point object as a const reference and copies its x and y values.
 A display() method to print the point's coordinates.
 In main(), create a Point object, then create another Point object using the copy constructor, and display both.

 Sample output:
 Point 1: (3, 4)
 Point 2: (3, 4)
 
*/

#include <iostream>

class Point {
private:
    int x;
    int y;
public:
    // Parameterized constructor
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Copy constructor
    Point(const Point &other) : x(other.x), y(other.y) {}

    // Display method
    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(3, 4);
    Point p2(p1); // copy constructor

    std::cout << "Point 1: ";
    p1.display();
    std::cout << std::endl;

    std::cout << "Point 2: ";
    p2.display();
    std::cout << std::endl;

    return 0;
}
