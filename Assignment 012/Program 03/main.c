/* WAP in c to print the first n numbers of the fibonacci
squence. define the fibonacci function and call it to print the number 
*/
#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d terms of Fibonacci Sequence..\n", n);
    for (int i = 1; i <= n; i++) {
        c = a + b;
        printf("%d ", a);
        a = b;
        b = c;
    }
    printf("\n");
}
int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

/*
-----------Output------------
Enter n : 6
6 terms of Fibonacci Sequence..
0 1 1 2 3 5 
*/