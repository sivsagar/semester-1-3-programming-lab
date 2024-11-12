/*Write c program to count the total number of 
aplhabets, digits and special character in string*/
#include <stdio.h>
#include <ctype.h>


int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;
    int i;

    printf("Enter a string: ");
    fgets(str , sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (ispunct(str[i]) || isspace(str[i]) == 0) {
           specialChars++;
        }
        
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}


/*---------------OUTPUT--------------
Enter a string: my name is sagar 07 &
Alphabets: 13
Digits: 2
Special characters: 1*/