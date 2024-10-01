/*Write a program in c where a function is defined 
which take two parameters (n and r) as input and returns the numberof ways in 'r' different 
things can be selected and arranged out of 'n' different things . 
*/
#include <stdio.h>

long long factorial(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < r) {
        printf("n should be greater than or equal to r\n");
        return 1;
    }

    printf("Number of ways to arrange %d out of %d different things is: %lld\n", r, n, permutation(n, r));
    return 0;
}


/*--------------------OUTPUT--------------------
  Enter the value of n: 4
Enter the value of r: 6
n should be greater than or equal to r
*/