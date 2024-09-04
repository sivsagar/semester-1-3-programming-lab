#include <stdio.h>
/* Take any positive number from the user and print 
a)the sum of its digits
b)the number of its digit  
*/
int main()
{
   int n, sum = 0, num = 0;

    printf("Enter Positive integer : ");
    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        sum += d;
        num++;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Number of digits = %d\n", num);


    return 0;
}

/* OUTPUT
  Enter Positive integer : 4324
  Sum of digits = 13
  Number of digits = 4
*/