/*Display the diamond pattern using inline function*/

#include <iostream>
using namespace std;

class Diamond {
private:
    int size;
    char pattern_char;
    
public:
    // Constructor
    Diamond(int s = 5, char c = '*') {
        size = s;
        pattern_char = c;
    }
    
    // Setter functions
    void setSize(int s) { size = s; }
    void setChar(char c) { pattern_char = c; }
    
    // Getter functions
    int getSize() const { return size; }
    char getChar() const { return pattern_char; }
    
    // Inline function to print spaces
    inline void printSpaces(int count) const {
        for(int i = 0; i < count; i++) {
            cout << " ";
        }
    }
    
    // Inline function to print characters
    inline void printChars(int count) const {
        for(int i = 0; i < count; i++) {
            cout << pattern_char << " ";
        }
    }
    
    // Inline function to calculate spaces for upper half
    inline int getUpperSpaces(int row) const {
        return size - row;
    }
    
    // Inline function to calculate characters for upper half
    inline int getUpperChars(int row) const {
        return row;
    }
    
    // Inline function to calculate spaces for lower half
    inline int getLowerSpaces(int row) const {
        return row + 1;
    }
    
    // Inline function to calculate characters for lower half
    inline int getLowerChars(int row) const {
        return size - row - 1;
    }
    
    // Function to display diamond info
    void displayInfo() const {
        cout << "Diamond pattern with size " << size << " using character '" << pattern_char << "'" << endl;
    }
    
    // Function to print upper half of diamond
    void printUpperHalf() const {
        cout << "\n--- Upper Half ---" << endl;
        for(int i = 1; i <= size; i++) {
            printSpaces(getUpperSpaces(i));
            printChars(getUpperChars(i));
            cout << endl;
        }
    }
    
    // Function to print lower half of diamond
    void printLowerHalf() const {
        cout << "\n--- Lower Half ---" << endl;
        for(int i = 0; i < size - 1; i++) {
            printSpaces(getLowerSpaces(i));
            printChars(getLowerChars(i));
            cout << endl;
        }
    }
    
    // Function to print complete diamond
    void printDiamond() const {
        cout << "\n--- Complete Diamond Pattern ---" << endl;
        
        // Upper half (including middle)
        for(int i = 1; i <= size; i++) {
            printSpaces(getUpperSpaces(i));
            printChars(getUpperChars(i));
            cout << endl;
        }
        
        // Lower half
        for(int i = 0; i < size - 1; i++) {
            printSpaces(getLowerSpaces(i));
            printChars(getLowerChars(i));
            cout << endl;
        }
    }
    
    // Inline function to print hollow diamond
    inline void printHollowDiamond() const {
        cout << "\n--- Hollow Diamond Pattern ---" << endl;
        
        // Upper half (including middle)
        for(int i = 1; i <= size; i++) {
            printSpaces(getUpperSpaces(i));
            
            // Print hollow pattern
            if(i == 1) {
                cout << pattern_char << " ";
            } else {
                cout << pattern_char << " ";
                for(int j = 0; j < (i - 2) * 2; j++) {
                    cout << " ";
                }
                if(i > 1) cout << pattern_char << " ";
            }
            cout << endl;
        }
        
        // Lower half
        for(int i = 0; i < size - 1; i++) {
            printSpaces(getLowerSpaces(i));
            
            int chars = getLowerChars(i);
            if(chars == 1) {
                cout << pattern_char << " ";
            } else if(chars > 1) {
                cout << pattern_char << " ";
                for(int j = 0; j < (chars - 2) * 2; j++) {
                    cout << " ";
                }
                cout << pattern_char << " ";
            }
            cout << endl;
        }
    }
};

// Global inline functions
inline void printHeader(const string& title) {
    cout << "\n=== " << title << " ===" << endl;
}

inline void printSeparator() {
    cout << "\n" << string(40, '-') << endl;
}

int main() {
    int size;
    char ch;
    
    printHeader("Diamond Pattern Using Inline Functions");
    
    cout << "Enter diamond size (number of rows for upper half): ";
    cin >> size;
    
    cout << "Enter pattern character: ";
    cin >> ch;
    
    // Create diamond object
    Diamond diamond(size, ch);
    
    // Display diamond info
    diamond.displayInfo();
    
    // Print different diamond patterns
    diamond.printDiamond();
    diamond.printHollowDiamond();
    
    printSeparator();
    printHeader("Predefined Examples");
    
    // Example 1: Small diamond with '*'
    cout << "\nExample 1: Size 4 with '*'" << endl;
    Diamond example1(4, '*');
    example1.displayInfo();
    example1.printDiamond();
    
    // Example 2: Diamond with different character
    cout << "\nExample 2: Size 3 with '#'" << endl;
    Diamond example2(3, '#');
    example2.displayInfo();
    example2.printDiamond();
    
    // Example 3: Hollow diamond
    cout << "\nExample 3: Size 5 hollow diamond with 'O'" << endl;
    Diamond example3(5, 'O');
    example3.displayInfo();
    example3.printHollowDiamond();
    
    // Example 4: Large diamond
    cout << "\nExample 4: Size 6 with '+'" << endl;
    Diamond example4(6, '+');
    example4.displayInfo();
    example4.printDiamond();
    
    return 0;
}

/*=== Diamond Pattern Using Inline Functions ===
Enter diamond size (number of rows for upper half): Enter pattern character: Diamond pattern with size 5 using character '*'

--- Complete Diamond Pattern ---
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

--- Hollow Diamond Pattern ---
    * 
   * * 
  *   * 
 *     * 
*       * 
 *     * 
  *   * 
   * * 
    * 
    */