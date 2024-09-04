#include <stdio.h>
/* Print alphabets from 'b' to 't' with a gap of 1 aplhabet
output: b d f h j l n p r t
*/
int main()
{
    for (char ch = 'b'; ch <= 't'; ch += 2)
    {

        printf("%c ",ch);
    }
    printf("\n");

    return 0;
}

/* OUTPUT

b d f h j l n p r t 
*/