#include<stdio.h>
/* Take a positive number(say n) from the user. Print from .5 to n
in increments of 0.25
*/
int main() {
     int x;

    printf("Enter Positive integer : ");
    scanf("%d", &x);

    for (float i = 0.5; i <= x; i += 0.25) {
        printf("%.2f ", i);
    }
    printf("\n");

    return 0;
}

/* OUTPUT
   Enter Positive integer : 2
0.50 0.75 1.00 1.25 1.50 1.75 2.00 
*/