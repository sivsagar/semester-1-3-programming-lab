/*
  a) Print the following pattern.
            *          
          *   *
        *       *
      *           *
    * * * * * * * * *
*/

#include <stdio.h>

int main() {
    int n = 5; // Number of rows
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (i == n || j == n - (i - 1) || j == n + (i - 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*
-----------Output------------
        *         
      *   *       
    *       *     
  *           *   
* * * * * * * * * 
*/