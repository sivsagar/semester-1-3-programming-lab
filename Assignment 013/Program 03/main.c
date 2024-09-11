/*
c)  Print the given pattern.
ex- 
a
bb
ccc
dddd
eeeee
*/

#include <stdio.h>
int main() {
    char ch = 'a';

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}

/*
-----------Output------------
a
bb
ccc
dddd
eeeee
*/