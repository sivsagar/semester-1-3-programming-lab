/* Check whether a number can be expressed as the sum of 
two prime numbers.
*/
#include <stdio.h>


int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int checkSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d can be expressed as the sum of %d and %d.\n", n, i, n - i);
            return 1;
        }
    }
    printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    checkSumOfTwoPrimes(n);
    return 0;
}


/*     -----------OutPut------------

   Enter a number: 10
10 can be expressed as the sum of 3 and 7.
*/