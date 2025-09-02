/*Create overloaded functions to process arrays of different types such as int, double, char with different operations
          i. sort,
          ii. reverse,
          iii. max/min.*/

#include <iostream>
using namespace std;

// Display functions
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void display(double arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void display(char arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

// Sort functions
void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;
            }
}
void sort(double arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                double temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;
            }
}
void sort(char arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                char temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;
            }
}

// Reverse functions
void reverse(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i]; arr[i] = arr[n-1-i]; arr[n-1-i] = temp;
    }
}
void reverse(double arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        double temp = arr[i]; arr[i] = arr[n-1-i]; arr[n-1-i] = temp;
    }
}
void reverse(char arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        char temp = arr[i]; arr[i] = arr[n-1-i]; arr[n-1-i] = temp;
    }
}

// Max functions
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    return max;
}
double findMax(double arr[], int n) {
    double max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    return max;
}
char findMax(char arr[], int n) {
    char max = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > max) max = arr[i];
    return max;
}

// Min functions
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
    return min;
}
double findMin(double arr[], int n) {
    double min = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
    return min;
}
char findMin(char arr[], int n) {
    char min = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
    return min;
}

int main() {
    // Integer array
    int arr1[] = {64, 25, 12, 22, 11};
    int n1 = 5;
    cout << "Integer Array Operations:\n";
    cout << "Original: "; display(arr1, n1);
    cout << "Max: " << findMax(arr1, n1) << ", Min: " << findMin(arr1, n1) << endl;
    sort(arr1, n1);
    cout << "Sorted: "; display(arr1, n1);
    reverse(arr1, n1);
    cout << "Reversed: "; display(arr1, n1);
    
    // Double array
    double arr2[] = {3.14, 2.71, 1.41, 4.47};
    int n2 = 4;
    cout << "\nDouble Array Operations:\n";
    cout << "Original: "; display(arr2, n2);
    cout << "Max: " << findMax(arr2, n2) << ", Min: " << findMin(arr2, n2) << endl;
    sort(arr2, n2);
    cout << "Sorted: "; display(arr2, n2);
    reverse(arr2, n2);
    cout << "Reversed: "; display(arr2, n2);
    
    // Character array
    char arr3[] = {'z', 'a', 'x', 'b'};
    int n3 = 4;
    cout << "\nCharacter Array Operations:\n";
    cout << "Original: "; display(arr3, n3);
    cout << "Max: " << findMax(arr3, n3) << ", Min: " << findMin(arr3, n3) << endl;
    sort(arr3, n3);
    cout << "Sorted: "; display(arr3, n3);
    reverse(arr3, n3);
    cout << "Reversed: "; display(arr3, n3);
    
    return 0;
}

/*OUPUT
Integer Array Operations:
Original: 64 25 12 22 11 
Max: 64, Min: 11
Sorted: 11 12 22 25 64 
Reversed: 64 25 22 12 11 

Double Array Operations:
Original: 3.14 2.71 1.41 4.47 
Max: 4.47, Min: 1.41
Sorted: 1.41 2.71 3.14 4.47 
Reversed: 4.47 3.14 2.71 1.41 

Character Array Operations:
Original: z a x b 
Max: z, Min: a
Sorted: a b x z 
Reversed: z x b a*/