/*Print the pattern of right-angled triangle using friend function*/

#include <iostream>
using namespace std;

class Triangle {
private:
    int rows;
    char pattern_char;
    
public:
    // Default constructor
    Triangle() {
        rows = 5;
        pattern_char = '*';
    }
    
    // Parameterized constructor
    Triangle(int r, char c = '*') {
        rows = r;
        pattern_char = c;
    }
    
    // Setter functions
    void setRows(int r) {
        rows = r;
    }
    
    void setPatternChar(char c) {
        pattern_char = c;
    }
    
    // Getter functions
    int getRows() const {
        return rows;
    }
    
    char getPatternChar() const {
        return pattern_char;
    }
    
    // Display triangle info
    void displayInfo() const {
        cout << "Triangle with " << rows << " rows using character '" << pattern_char << "'" << endl;
    }
    
    // Friend function declarations
    friend void printRightAngleTriangle(const Triangle& t);
    friend void printNumberTriangle(const Triangle& t);
    friend void printReverseTriangle(const Triangle& t);
    friend void printHollowTriangle(const Triangle& t);
};

// Friend function to print right-angled triangle pattern
void printRightAngleTriangle(const Triangle& t) {
    cout << "\n--- Right-Angled Triangle Pattern ---" << endl;
    for(int i = 1; i <= t.rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << t.pattern_char << " ";
        }
        cout << endl;
    }
}

// Friend function to print number triangle pattern
void printNumberTriangle(const Triangle& t) {
    cout << "\n--- Number Triangle Pattern ---" << endl;
    for(int i = 1; i <= t.rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Friend function to print reverse triangle pattern
void printReverseTriangle(const Triangle& t) {
    cout << "\n--- Reverse Right-Angled Triangle Pattern ---" << endl;
    for(int i = t.rows; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << t.pattern_char << " ";
        }
        cout << endl;
    }
}

// Friend function to print hollow triangle pattern
void printHollowTriangle(const Triangle& t) {
    cout << "\n--- Hollow Right-Angled Triangle Pattern ---" << endl;
    for(int i = 1; i <= t.rows; i++) {
        for(int j = 1; j <= i; j++) {
            // Print character only at boundaries or first/last row
            if(j == 1 || j == i || i == t.rows) {
                cout << t.pattern_char << " ";
            } else {
                cout << "  "; // Two spaces for alignment
            }
        }
        cout << endl;
    }
}

int main() {
    int rows;
    char ch;
    
    cout << "=== Right-Angled Triangle Pattern Using Friend Function ===" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter pattern character: ";
    cin >> ch;
    
    // Create triangle object
    Triangle triangle(rows, ch);
    
    // Display triangle info
    triangle.displayInfo();
    
    // Print different triangle patterns using friend functions
    printRightAngleTriangle(triangle);
    printNumberTriangle(triangle);
    printReverseTriangle(triangle);
    printHollowTriangle(triangle);
    
    cout << "\n=== Predefined Examples ===" << endl;
    
    // Example 1: Small triangle with '*'
    cout << "\nExample 1: 4 rows with '*'" << endl;
    Triangle example1(4, '*');
    example1.displayInfo();
    printRightAngleTriangle(example1);
    
    // Example 2: Triangle with different character
    cout << "\nExample 2: 6 rows with '#'" << endl;
    Triangle example2(6, '#');
    example2.displayInfo();
    printRightAngleTriangle(example2);
    
    // Example 3: Triangle with numbers
    cout << "\nExample 3: 5 rows with number pattern" << endl;
    Triangle example3(5);
    example3.displayInfo();
    printNumberTriangle(example3);
    
    // Example 4: Hollow triangle
    cout << "\nExample 4: 7 rows hollow triangle with 'o'" << endl;
    Triangle example4(7, 'o');
    example4.displayInfo();
    printHollowTriangle(example4);
    
    return 0;
}

/*OUTPUT
=== Right-Angled Triangle Pattern Using Friend Function ===
Enter number of rows: Enter pattern character: Triangle with 5 rows using character '*'

--- Right-Angled Triangle Pattern ---
* 
* * 
* * * 
* * * * 
* * * * * 

--- Number Triangle Pattern ---
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

--- Reverse Right-Angled Triangle Pattern ---
* * * * * 
* * * * 
* * * 
* * 
* 

--- Hollow Right-Angled Triangle Pattern ---
* 
* * 
*   * 
*     * 
* * * * * */