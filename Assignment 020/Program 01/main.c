#include <stdio.h>
//Write a program in c to display all the value in an array in reversed order
int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array in reversed order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d \n", arr[i]);
    }
    printf("\n");
    return 0;
}