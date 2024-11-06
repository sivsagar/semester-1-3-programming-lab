/*Print even index (like 2, 4,...) values and print sum of these values.
*/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    printf("Values at even indices: ");
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nSum of values at even indices: %d\n", sum);

    return 0;
}

/*---------OUTPUT----------
Values at even indices: 1 3 5 7 9 
Sum of values at even indices: 25*/