/*Write a Program in C to print the n-th term of the fibonacci sequence*/

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    printf("The %d-th term of the Fibonacci sequence is %d\n", n, fibonacci(n));
    return 0;
}

/*--------------------OUTPUT--------------------
   Enter the term number: 10
The 10-th term of the Fibonacci sequence is 55
*/