/*Find the sum of digits for three numbers taken from the user
and find the maximum of their sum*/
#include <stdio.h>

int sumofdigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int sum1 = sumofdigits(num1);
    int sum2 = sumofdigits(num2);
    int sum3 = sumofdigits(num3);

    int maxsum = sum1;
    if (sum2 > maxsum) {
        maxsum = sum2;
    }
    if (sum3 > maxsum) {
        maxsum = sum3;
    }

    printf("The maximum sum of digits is: %d\n", maxsum);
    return 0;
}
  /*-------OutPut-------

Enter three numbers: 11 22 33
The maximum sum of digits is: 6

  */