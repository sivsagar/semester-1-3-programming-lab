//b) WAP in C to take a positive integer as input from the
//user. Find the sum of squares of all the positive integers upto the 
//given integer.
//(Eg : if you give 4 as input , the program will compute and print
//the sum 1^2 + 2^2 + 3^3 + 4^2)

#include<stdio.h>
int main() {
int x,sum;
printf("Enter a positive integer : ");
scanf("%d", &x);

for (int i = 1; i <= x; i++) {
    sum += i * i;
}
printf("Sum of squares are : %d\n",sum);

    return 0;
}

/*output of the program

Enter a positive integer : 4
Sum of squares are : 30
*/