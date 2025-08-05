#include <stdio.h>
/*
Perform a 2x2 matrix multiplication using pointers.
*/

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    int i, j, k;

    // Matrix multiplication using pointers
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            *(*(result + i) + j) = 0;
            for (k = 0; k < 2; k++) {
                *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }

    // Print result
    printf("Resultant matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
}