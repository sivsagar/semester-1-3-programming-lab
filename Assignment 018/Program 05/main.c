/*Write a program in c where a function is defined which takes the 
value of USD($) as input and returns the corresponding value of INR*/
#include <stdio.h>

float convertUSDtoINR(float usd) {
    float conversionRate = 83.81; 
    return usd * conversionRate;
}

int main() {
    float usd;
    printf("Enter amount in USD: ");
    scanf("%f", &usd);
    float inr = convertUSDtoINR(usd);
    printf("%.2f USD is equal to %.2f INR\n", usd, inr);
    return 0;
}


/*--------------------OUTPUT--------------------
       Enter amount in USD: 100
   100.00 USD is equal to 8381.00 INR
*/