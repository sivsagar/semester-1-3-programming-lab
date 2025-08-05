#include<stdio.h>

/*
to find whether a given number is armstrong number or not
*/
int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an Number: ");
    scanf("%d", &num);

    originalNum = num;

   
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        int power = 1;
        for (int i = 0; i < n; i++)
            power *= remainder;
        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an armstrong number.\n", num);
    else
        printf("%d is not an armstrong number.\n", num);

    return 0;
}

/*
Enter an Number: 153
153 is an armstrong number.
*/