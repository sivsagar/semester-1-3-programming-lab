//d) WAP in C to take two integers as input from the user 
//and compute the LCM (Least common multiple) of the two integers. Use 
//the FOR loop


#include<stdio.h>
int main() {
int x,y,gcd,lcm;

printf("Enter 1st integer : ");
scanf("%d", &x);

printf("Enter 2nd integer : ");
scanf("%d", &y);

for (int i = 1; i <= x; i++) {
    if (x % i == 0 && y % i == 0) {
        gcd = i;
    }
}

lcm = ( x * y) / gcd;

printf("Least Common Multiple %d and %d = %d\n", x,y,lcm);
    return 0;
}

/*OUTPUT 



*/
