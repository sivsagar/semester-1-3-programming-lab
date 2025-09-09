/*Perform the addition of 2 matrices using friend function.*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class Matrix {
private:
    int rows, cols;
    int data[MAX_SIZE][MAX_SIZE];
    
public:
    // Constructor
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
        // Initialize with zeros
        for(int i = 0; i < MAX_SIZE; i++) {
            for(int j = 0; j < MAX_SIZE; j++) {
                data[i][j] = 0;
            }
        }
    }
    
    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter elements for " << rows << "x" << cols << " matrix:" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << "Element [" << i+1 << "][" << j+1 << "]: ";
                cin >> data[i][j];
            }
        }
    }
    
    // Function to display matrix
    void displayMatrix() const {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }
    
    // Setter for dimensions
    void setDimensions(int r, int c) {
        rows = r;
        cols = c;
    }
    
    // Function to set element value
    void setElement(int row, int col, int value) {
        if(row < rows && col < cols) {
            data[row][col] = value;
        }
    }
    
    // Getter functions for dimensions
    int getRows() const { return rows; }
    int getCols() const { return cols; }
    
    // Friend function declaration for matrix addition
    friend Matrix addMatrices(const Matrix& m1, const Matrix& m2);
};

// Friend function definition - can access private members
Matrix addMatrices(const Matrix& m1, const Matrix& m2) {
    // Check if matrices have same dimensions
    if(m1.rows != m2.rows || m1.cols != m2.cols) {
        cout << "Error: Matrices must have same dimensions for addition!" << endl;
        return Matrix(0, 0);
    }
    
    // Create result matrix
    Matrix result(m1.rows, m1.cols);
    
    // Perform addition
    for(int i = 0; i < m1.rows; i++) {
        for(int j = 0; j < m1.cols; j++) {
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
        }
    }
    
    return result;
}

int main() {
    int rows, cols;
    
    cout << "=== Matrix Addition Using Friend Function ===" << endl;
    cout << "Enter dimensions of matrices (rows cols): ";
    cin >> rows >> cols;
    
    if(rows > MAX_SIZE || cols > MAX_SIZE) {
        cout << "Error: Matrix size too large! Maximum size is " << MAX_SIZE << "x" << MAX_SIZE << endl;
        return 1;
    }
    
    // Create two matrices
    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);
    
    cout << "\n--- Input First Matrix ---" << endl;
    matrix1.inputMatrix();
    
    cout << "\n--- Input Second Matrix ---" << endl;
    matrix2.inputMatrix();
    
    cout << "\n--- Matrix 1 ---" << endl;
    matrix1.displayMatrix();
    
    cout << "\n--- Matrix 2 ---" << endl;
    matrix2.displayMatrix();
    
    // Add matrices using friend function
    Matrix result = addMatrices(matrix1, matrix2);
    
    cout << "\n--- Result (Matrix1 + Matrix2) ---" << endl;
    result.displayMatrix();
    
    // Example with predefined matrices
    cout << "\n=== Example with predefined 2x3 matrices ===" << endl;
    Matrix example1(2, 3);
    Matrix example2(2, 3);
    
    // Set values for first matrix [[1, 2, 3], [4, 5, 6]]
    example1.setElement(0, 0, 1);
    example1.setElement(0, 1, 2);
    example1.setElement(0, 2, 3);
    example1.setElement(1, 0, 4);
    example1.setElement(1, 1, 5);
    example1.setElement(1, 2, 6);
    
    // Set values for second matrix [[7, 8, 9], [10, 11, 12]]
    example2.setElement(0, 0, 7);
    example2.setElement(0, 1, 8);
    example2.setElement(0, 2, 9);
    example2.setElement(1, 0, 10);
    example2.setElement(1, 1, 11);
    example2.setElement(1, 2, 12);
    
    cout << "Matrix A:" << endl;
    example1.displayMatrix();
    
    cout << "Matrix B:" << endl;
    example2.displayMatrix();
    
    Matrix exampleResult = addMatrices(example1, example2);
    cout << "Matrix A + Matrix B:" << endl;
    exampleResult.displayMatrix();
    
    return 0;
}


/*OUTPUT
=== Matrix Addition Using Friend Function ===
Enter dimensions of matrices (rows cols): 
--- Input First Matrix ---
Enter elements for 2x2 matrix:
Element [1][1]: Element [1][2]: Element [2][1]: Element [2][2]: 
--- Input Second Matrix ---
Enter elements for 2x2 matrix:
Element [1][1]: Element [1][2]: Element [2][1]: Element [2][2]: 
--- Matrix 1 ---
1       2
3       4

--- Matrix 2 ---
5       6
7       8

--- Result (Matrix1 + Matrix2) ---
6       8
10      12*/