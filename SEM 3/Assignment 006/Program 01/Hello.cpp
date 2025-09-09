/*Use friend function to calculate the average of two numbers*/

#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
    
public:
    // Constructor to initialize the numbers
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }
    
    // Default constructor
    Calculator() {
        num1 = 0;
        num2 = 0;
    }
    
    // Setter functions
    void setNumbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }
    
    // Display function
    void displayNumbers() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }
    
    // Friend function declaration
    friend double calculateAverage(Calculator obj);
};

// Friend function definition - can access private members
double calculateAverage(Calculator obj) {
    return (obj.num1 + obj.num2) / 2.0;
}

int main() {
    Calculator calc;
    double n1, n2;
    
    cout << "=== Friend Function to Calculate Average ===" << endl;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // Set the numbers
    calc.setNumbers(n1, n2);
    
    // Display the numbers
    cout << "\nInput Numbers:" << endl;
    calc.displayNumbers();
    
    // Calculate average using friend function
    double average = calculateAverage(calc);
    
    cout << "\nAverage of " << n1 << " and " << n2 << " = " << average << endl;
    
    // Another example with constructor
    cout << "\n--- Another Example ---" << endl;
    Calculator calc2(15.5, 24.5);
    cout << "Using constructor with values 15.5 and 24.5:" << endl;
    calc2.displayNumbers();
    cout << "Average = " << calculateAverage(calc2) << endl;
    
    return 0;
}


/*OUTPUT
=== Friend Function to Calculate Average ===
Enter two numbers: 
Input Numbers:
Number 1: 10.5
Number 2: 20.5

Average of 10.5 and 20.5 = 15.5

--- Another Example ---
Using constructor with values 15.5 and 24.5:
Number 1: 15.5
Number 2: 24.5
Average = 20*/