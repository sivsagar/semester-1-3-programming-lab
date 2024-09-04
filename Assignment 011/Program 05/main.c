#include <stdio.h>
/* e) print the following with the number of rows taken from
the user.  
*/
int main()
{
    int n;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/* OUTPUT
 Enter number of rows : 4
   *
  ***
 *****
*******
*/