//c) WAP in C to take two integers as input from the user 
//and compute the GCD (greatest common divisor ) of the two integers. Use 
//the FOR loop


#include<stdio.h>
int main() {
int x,y,gcd;

printf("Enter 1st integer : ");
scanf("%d", &x);

printf("Enter 2nd integer : ");
scanf("%d", &y);

for (int i = 1; i <= x; i++) {
    if (x % i == 0 && y % i == 0) {
        gcd = i;
    }
}

printf("Greatest Common Divisor of %d and %d = %d\n", x,y,gcd);
    return 0;
}

/*OUTPUT 

Enter 1st integer : 30
Enter 2nd integer : 36
Greatest Common Divisor of 30 and 36 = 6

*/
