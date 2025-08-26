/*Redo the above program using a class called factorial and appropriate member 
functions.
*/
#include <iostream>
using namespace std;

class Factorial {
private:
    int number;
    
public:
    // Constructor
    Factorial() {
        number = 0;
    }
    
    // Parameterized constructor
    Factorial(int n) {
        number = n;
    }
    
    // Function to input number
    void input() {
        cout << "Enter a number: ";
        cin >> number;
    }
    
    // Function to calculate factorial using iterative method
    long long calculateIterative() {
        if (number < 0) {
            return -1; // Error case
        }
        
        long long fact = 1;
        for (int i = 1; i <= number; i++) {
            fact *= i;
        }
        return fact;
    }
    
    // Function to calculate factorial using recursive method
    long long calculateRecursive(int n = -1) {
        // If no parameter passed, use the member variable
        if (n == -1) n = number;
        
        if (n < 0) return -1; // Error case
        if (n == 0 || n == 1) return 1;
        return n * calculateRecursive(n - 1);
    }
    
    // Function to display results
    void displayResult() {
        if (number < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return;
        }
        
        long long iterativeResult = calculateIterative();
        long long recursiveResult = calculateRecursive();
        
        cout << "Factorial of " << number << " (iterative) = " << iterativeResult << endl;
        cout << "Factorial of " << number << " (recursive) = " << recursiveResult << endl;
    }
    
    // Getter function
    int getNumber() {
        return number;
    }
    
    // Setter function
    void setNumber(int n) {
        number = n;
    }
    
    // Function to check if number is valid for factorial
    bool isValidNumber() {
        return number >= 0;
    }
};

int main() {
    Factorial factObj;
    factObj.input();
    factObj.displayResult();
    return 0;
}

/*
Enter a number:6
Factorial of 6 (iterative) = 720
Factorial of 6 (recursive) = 720
*/